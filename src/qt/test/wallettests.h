#ifndef PIZCOIN_QT_TEST_WALLETTESTS_H
#define PIZCOIN_QT_TEST_WALLETTESTS_H

#include <QObject>
#include <QTest>

class WalletTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void walletTests();
};

#endif // PIZCOIN_QT_TEST_WALLETTESTS_H
