// Copyright (c) 2011-2014 The Pizcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PIZCOIN_QT_PIZCOINADDRESSVALIDATOR_H
#define PIZCOIN_QT_PIZCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PizcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PizcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Pizcoin address widget validator, checks for a valid pizcoin address.
 */
class PizcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PizcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // PIZCOIN_QT_PIZCOINADDRESSVALIDATOR_H
