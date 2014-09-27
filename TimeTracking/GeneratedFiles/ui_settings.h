/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbDBConnection;
    QGridLayout *gridLayout;
    QLabel *l0;
    QComboBox *cmbTypeConnection;
    QLabel *l1;
    QLineEdit *leHostName;
    QLabel *l2;
    QLineEdit *leDatabaseName;
    QLabel *l3;
    QLineEdit *leUserName;
    QLabel *l4;
    QLineEdit *lePassword;
    QLabel *l5;
    QLineEdit *leNumber;
    QPushButton *pbGenID;
    QCheckBox *cbSaveUP;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(395, 275);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbDBConnection = new QGroupBox(Settings);
        gbDBConnection->setObjectName(QStringLiteral("gbDBConnection"));
        gridLayout = new QGridLayout(gbDBConnection);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        l0 = new QLabel(gbDBConnection);
        l0->setObjectName(QStringLiteral("l0"));

        gridLayout->addWidget(l0, 0, 0, 1, 1);

        cmbTypeConnection = new QComboBox(gbDBConnection);
        cmbTypeConnection->setObjectName(QStringLiteral("cmbTypeConnection"));

        gridLayout->addWidget(cmbTypeConnection, 0, 1, 1, 2);

        l1 = new QLabel(gbDBConnection);
        l1->setObjectName(QStringLiteral("l1"));

        gridLayout->addWidget(l1, 1, 0, 1, 1);

        leHostName = new QLineEdit(gbDBConnection);
        leHostName->setObjectName(QStringLiteral("leHostName"));

        gridLayout->addWidget(leHostName, 1, 1, 1, 2);

        l2 = new QLabel(gbDBConnection);
        l2->setObjectName(QStringLiteral("l2"));

        gridLayout->addWidget(l2, 2, 0, 1, 1);

        leDatabaseName = new QLineEdit(gbDBConnection);
        leDatabaseName->setObjectName(QStringLiteral("leDatabaseName"));

        gridLayout->addWidget(leDatabaseName, 2, 1, 1, 2);

        l3 = new QLabel(gbDBConnection);
        l3->setObjectName(QStringLiteral("l3"));

        gridLayout->addWidget(l3, 3, 0, 1, 1);

        leUserName = new QLineEdit(gbDBConnection);
        leUserName->setObjectName(QStringLiteral("leUserName"));

        gridLayout->addWidget(leUserName, 3, 1, 1, 2);

        l4 = new QLabel(gbDBConnection);
        l4->setObjectName(QStringLiteral("l4"));

        gridLayout->addWidget(l4, 4, 0, 1, 1);

        lePassword = new QLineEdit(gbDBConnection);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePassword, 4, 1, 1, 2);

        l5 = new QLabel(gbDBConnection);
        l5->setObjectName(QStringLiteral("l5"));

        gridLayout->addWidget(l5, 5, 0, 1, 1);

        leNumber = new QLineEdit(gbDBConnection);
        leNumber->setObjectName(QStringLiteral("leNumber"));

        gridLayout->addWidget(leNumber, 5, 1, 1, 1);

        pbGenID = new QPushButton(gbDBConnection);
        pbGenID->setObjectName(QStringLiteral("pbGenID"));

        gridLayout->addWidget(pbGenID, 5, 2, 1, 1);

        cbSaveUP = new QCheckBox(gbDBConnection);
        cbSaveUP->setObjectName(QStringLiteral("cbSaveUP"));

        gridLayout->addWidget(cbSaveUP, 6, 0, 1, 2);


        verticalLayout->addWidget(gbDBConnection);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbOk = new QPushButton(Settings);
        pbOk->setObjectName(QStringLiteral("pbOk"));

        horizontalLayout->addWidget(pbOk);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbCancel = new QPushButton(Settings);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(cmbTypeConnection, leHostName);
        QWidget::setTabOrder(leHostName, leDatabaseName);
        QWidget::setTabOrder(leDatabaseName, leUserName);
        QWidget::setTabOrder(leUserName, lePassword);
        QWidget::setTabOrder(lePassword, leNumber);
        QWidget::setTabOrder(leNumber, cbSaveUP);
        QWidget::setTabOrder(cbSaveUP, pbOk);
        QWidget::setTabOrder(pbOk, pbCancel);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", 0));
        gbDBConnection->setTitle(QApplication::translate("Settings", "DB Connection", 0));
        l0->setText(QApplication::translate("Settings", "Type connection", 0));
        l1->setText(QApplication::translate("Settings", "Host name", 0));
        l2->setText(QApplication::translate("Settings", "Database name", 0));
        l3->setText(QApplication::translate("Settings", "User name", 0));
        l4->setText(QApplication::translate("Settings", "Password", 0));
        l5->setText(QApplication::translate("Settings", "ID", 0));
        pbGenID->setText(QApplication::translate("Settings", "Gen ID", 0));
        cbSaveUP->setText(QApplication::translate("Settings", "Save user password", 0));
        pbOk->setText(QApplication::translate("Settings", "Ok", 0));
        pbCancel->setText(QApplication::translate("Settings", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
