/********************************************************************************
** Form generated from reading UI file 'timetracking.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETRACKING_H
#define UI_TIMETRACKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeTrackingClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionRefEmployees;
    QAction *actionRefCustomers;
    QAction *actionRepEmployees;
    QAction *actionRepCustomers;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionRegister;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *gbFilter;
    QHBoxLayout *horizontalLayout;
    QDateEdit *de_begin;
    QDateEdit *de_end;
    QComboBox *cmb_empoyer;
    QComboBox *cmb_customer;
    QPushButton *pbFilter;
    QTableView *tv;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuReferences;
    QMenu *menuReports;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TimeTrackingClass)
    {
        if (TimeTrackingClass->objectName().isEmpty())
            TimeTrackingClass->setObjectName(QStringLiteral("TimeTrackingClass"));
        TimeTrackingClass->resize(600, 400);
        actionNew = new QAction(TimeTrackingClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(TimeTrackingClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_as = new QAction(TimeTrackingClass);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionSettings = new QAction(TimeTrackingClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionExit = new QAction(TimeTrackingClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionRefEmployees = new QAction(TimeTrackingClass);
        actionRefEmployees->setObjectName(QStringLiteral("actionRefEmployees"));
        actionRefCustomers = new QAction(TimeTrackingClass);
        actionRefCustomers->setObjectName(QStringLiteral("actionRefCustomers"));
        actionRepEmployees = new QAction(TimeTrackingClass);
        actionRepEmployees->setObjectName(QStringLiteral("actionRepEmployees"));
        actionRepCustomers = new QAction(TimeTrackingClass);
        actionRepCustomers->setObjectName(QStringLiteral("actionRepCustomers"));
        actionAbout = new QAction(TimeTrackingClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(TimeTrackingClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionRegister = new QAction(TimeTrackingClass);
        actionRegister->setObjectName(QStringLiteral("actionRegister"));
        centralWidget = new QWidget(TimeTrackingClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbFilter = new QGroupBox(centralWidget);
        gbFilter->setObjectName(QStringLiteral("gbFilter"));
        horizontalLayout = new QHBoxLayout(gbFilter);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        de_begin = new QDateEdit(gbFilter);
        de_begin->setObjectName(QStringLiteral("de_begin"));

        horizontalLayout->addWidget(de_begin);

        de_end = new QDateEdit(gbFilter);
        de_end->setObjectName(QStringLiteral("de_end"));

        horizontalLayout->addWidget(de_end);

        cmb_empoyer = new QComboBox(gbFilter);
        cmb_empoyer->setObjectName(QStringLiteral("cmb_empoyer"));

        horizontalLayout->addWidget(cmb_empoyer);

        cmb_customer = new QComboBox(gbFilter);
        cmb_customer->setObjectName(QStringLiteral("cmb_customer"));

        horizontalLayout->addWidget(cmb_customer);

        pbFilter = new QPushButton(gbFilter);
        pbFilter->setObjectName(QStringLiteral("pbFilter"));
        pbFilter->setCheckable(true);
        pbFilter->setChecked(false);

        horizontalLayout->addWidget(pbFilter);


        verticalLayout->addWidget(gbFilter);

        tv = new QTableView(centralWidget);
        tv->setObjectName(QStringLiteral("tv"));

        verticalLayout->addWidget(tv);

        TimeTrackingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TimeTrackingClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuReferences = new QMenu(menuBar);
        menuReferences->setObjectName(QStringLiteral("menuReferences"));
        menuReports = new QMenu(menuBar);
        menuReports->setObjectName(QStringLiteral("menuReports"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TimeTrackingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TimeTrackingClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TimeTrackingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TimeTrackingClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TimeTrackingClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuReferences->menuAction());
        menuBar->addAction(menuReports->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuReferences->addAction(actionRefEmployees);
        menuReferences->addAction(actionRefCustomers);
        menuReports->addAction(actionRepEmployees);
        menuReports->addAction(actionRepCustomers);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp);

        retranslateUi(TimeTrackingClass);

        QMetaObject::connectSlotsByName(TimeTrackingClass);
    } // setupUi

    void retranslateUi(QMainWindow *TimeTrackingClass)
    {
        TimeTrackingClass->setWindowTitle(QApplication::translate("TimeTrackingClass", "TimeTracking", 0));
        actionNew->setText(QApplication::translate("TimeTrackingClass", "New", 0));
        actionOpen->setText(QApplication::translate("TimeTrackingClass", "Open", 0));
        actionSave_as->setText(QApplication::translate("TimeTrackingClass", "Save as...", 0));
        actionSettings->setText(QApplication::translate("TimeTrackingClass", "Settings", 0));
        actionExit->setText(QApplication::translate("TimeTrackingClass", "Exit", 0));
        actionRefEmployees->setText(QApplication::translate("TimeTrackingClass", "Employees", 0));
        actionRefCustomers->setText(QApplication::translate("TimeTrackingClass", "Customers", 0));
        actionRepEmployees->setText(QApplication::translate("TimeTrackingClass", "Employees", 0));
        actionRepCustomers->setText(QApplication::translate("TimeTrackingClass", "Customers", 0));
        actionAbout->setText(QApplication::translate("TimeTrackingClass", "About", 0));
        actionHelp->setText(QApplication::translate("TimeTrackingClass", "Help", 0));
        actionRegister->setText(QApplication::translate("TimeTrackingClass", "Register", 0));
        gbFilter->setTitle(QApplication::translate("TimeTrackingClass", "Filter options", 0));
        pbFilter->setText(QApplication::translate("TimeTrackingClass", "Filter", 0));
        menuFile->setTitle(QApplication::translate("TimeTrackingClass", "File", 0));
        menuReferences->setTitle(QApplication::translate("TimeTrackingClass", "References", 0));
        menuReports->setTitle(QApplication::translate("TimeTrackingClass", "Reports", 0));
        menuHelp->setTitle(QApplication::translate("TimeTrackingClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class TimeTrackingClass: public Ui_TimeTrackingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETRACKING_H
