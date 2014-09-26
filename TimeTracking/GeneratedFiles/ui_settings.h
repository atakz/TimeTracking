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
#include <QtWidgets/QFormLayout>
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
    QFormLayout *formLayout;
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
    QCheckBox *cbSaveUP;
    QLabel *l5;
    QLineEdit *leNumber;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(379, 258);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbDBConnection = new QGroupBox(Settings);
        gbDBConnection->setObjectName(QStringLiteral("gbDBConnection"));
        formLayout = new QFormLayout(gbDBConnection);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        l0 = new QLabel(gbDBConnection);
        l0->setObjectName(QStringLiteral("l0"));

        formLayout->setWidget(0, QFormLayout::LabelRole, l0);

        cmbTypeConnection = new QComboBox(gbDBConnection);
        cmbTypeConnection->setObjectName(QStringLiteral("cmbTypeConnection"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cmbTypeConnection);

        l1 = new QLabel(gbDBConnection);
        l1->setObjectName(QStringLiteral("l1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, l1);

        leHostName = new QLineEdit(gbDBConnection);
        leHostName->setObjectName(QStringLiteral("leHostName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leHostName);

        l2 = new QLabel(gbDBConnection);
        l2->setObjectName(QStringLiteral("l2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, l2);

        leDatabaseName = new QLineEdit(gbDBConnection);
        leDatabaseName->setObjectName(QStringLiteral("leDatabaseName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leDatabaseName);

        l3 = new QLabel(gbDBConnection);
        l3->setObjectName(QStringLiteral("l3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, l3);

        leUserName = new QLineEdit(gbDBConnection);
        leUserName->setObjectName(QStringLiteral("leUserName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leUserName);

        l4 = new QLabel(gbDBConnection);
        l4->setObjectName(QStringLiteral("l4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, l4);

        lePassword = new QLineEdit(gbDBConnection);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lePassword);

        cbSaveUP = new QCheckBox(gbDBConnection);
        cbSaveUP->setObjectName(QStringLiteral("cbSaveUP"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, cbSaveUP);

        l5 = new QLabel(gbDBConnection);
        l5->setObjectName(QStringLiteral("l5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, l5);

        leNumber = new QLineEdit(gbDBConnection);
        leNumber->setObjectName(QStringLiteral("leNumber"));

        formLayout->setWidget(5, QFormLayout::FieldRole, leNumber);


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
        QWidget::setTabOrder(lePassword, cbSaveUP);
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
        cbSaveUP->setText(QApplication::translate("Settings", "Save user name and password", 0));
        l5->setText(QApplication::translate("Settings", "ID", 0));
        pbOk->setText(QApplication::translate("Settings", "Ok", 0));
        pbCancel->setText(QApplication::translate("Settings", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
