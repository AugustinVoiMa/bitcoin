// Copyright (c) 2009-2016 The Pizcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PIZCOIN_QT_TEST_COMPATTESTS_H
#define PIZCOIN_QT_TEST_COMPATTESTS_H

#include <QObject>
#include <QTest>

class CompatTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void bswapTests();
};

#endif // PIZCOIN_QT_TEST_COMPATTESTS_H
