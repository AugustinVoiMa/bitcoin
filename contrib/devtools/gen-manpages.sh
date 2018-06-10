#!/bin/bash

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

PIZCOIND=${PIZCOIND:-$BINDIR/pizcoind}
PIZCOINCLI=${PIZCOINCLI:-$BINDIR/pizcoin-cli}
PIZCOINTX=${PIZCOINTX:-$BINDIR/pizcoin-tx}
PIZCOINQT=${PIZCOINQT:-$BINDIR/qt/pizcoin-qt}

[ ! -x $PIZCOIND ] && echo "$PIZCOIND not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
PIZVER=($($PIZCOINCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for pizcoind if --version-string is not set,
# but has different outcomes for pizcoin-qt and pizcoin-cli.
echo "[COPYRIGHT]" > footer.h2m
$PIZCOIND --version | sed -n '1!p' >> footer.h2m

for cmd in $PIZCOIND $PIZCOINCLI $PIZCOINTX $PIZCOINQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${PIZVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${PIZVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
