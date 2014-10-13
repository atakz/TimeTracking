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
    QAction *actionNewItem;
    QAction *actionEditItem;
    QAction *actionDeleteItem;
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
    QMenu *menuEdit;
    QMenu *menuRegister;
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/TimeTracking/Resources/stock_folder-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon);
        actionExit = new QAction(TimeTrackingClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TimeTracking/Resources/gnome-session-logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionRefEmployees = new QAction(TimeTrackingClass);
        actionRefEmployees->setObjectName(QStringLiteral("actionRefEmployees"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TimeTracking/Resources/user-info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefEmployees->setIcon(icon2);
        actionRefCustomers = new QAction(TimeTrackingClass);
        actionRefCustomers->setObjectName(QStringLiteral("actionRefCustomers"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TimeTracking/Resources/evolution-contacts.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefCustomers->setIcon(icon3);
        actionRepEmployees = new QAction(TimeTrackingClass);
        actionRepEmployees->setObjectName(QStringLiteral("actionRepEmployees"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/TimeTracking/Resources/format-indent-less.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRepEmployees->setIcon(icon4);
        actionRepCustomers = new QAction(TimeTrackingClass);
        actionRepCustomers->setObjectName(QStringLiteral("actionRepCustomers"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/TimeTracking/Resources/format-indent-more.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRepCustomers->setIcon(icon5);
        actionAbout = new QAction(TimeTrackingClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/TimeTracking/Resources/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionHelp = new QAction(TimeTrackingClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/TimeTracking/Resources/help-faq.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon7);
        actionRegister = new QAction(TimeTrackingClass);
        actionRegister->setObjectName(QStringLiteral("actionRegister"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/TimeTracking/Resources/stock_task.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegister->setIcon(icon8);
        actionNewItem = new QAction(TimeTrackingClass);
        actionNewItem->setObjectName(QStringLiteral("actionNewItem"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/TimeTracking/Resources/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewItem->setIcon(icon9);
        actionEditItem = new QAction(TimeTrackingClass);
        actionEditItem->setObjectName(QStringLiteral("actionEditItem"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/TimeTracking/Resources/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditItem->setIcon(icon10);
        actionDeleteItem = new QAction(TimeTrackingClass);
        actionDeleteItem->setObjectName(QStringLiteral("actionDeleteItem"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/TimeTracking/Resources/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteItem->setIcon(icon11);
        centralWidget = new QWidget(TimeTrackingClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbFilter = new QGroupBox(centralWidget);
        gbFilter->setObjectName(QStringLiteral("gbFilter"));
        horizontalLayout = new QHBoxLayout(gbFilter);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
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
        tv->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tv->setSelectionBehavior(QAbstractItemView::SelectRows);

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
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuRegister = new QMenu(menuBar);
        menuRegister->setObjectName(QStringLiteral("menuRegister"));
        TimeTrackingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TimeTrackingClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        TimeTrackingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TimeTrackingClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TimeTrackingClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuReferences->menuAction());
        menuBar->addAction(menuRegister->menuAction());
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
        menuEdit->addAction(actionNewItem);
        menuEdit->addAction(actionEditItem);
        menuEdit->addAction(actionDeleteItem);
        menuRegister->addAction(actionRegister);

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
        actionNewItem->setText(QApplication::translate("TimeTrackingClass", "New item", 0));
        actionEditItem->setText(QApplication::translate("TimeTrackingClass", "Edit item", 0));
        actionDeleteItem->setText(QApplication::translate("TimeTrackingClass", "Delete item", 0));
        gbFilter->setTitle(QApplication::translate("TimeTrackingClass", "Filter options", 0));
        pbFilter->setText(QApplication::translate("TimeTrackingClass", "Filter", 0));
        menuFile->setTitle(QApplication::translate("TimeTrackingClass", "File", 0));
        menuReferences->setTitle(QApplication::translate("TimeTrackingClass", "References", 0));
        menuReports->setTitle(QApplication::translate("TimeTrackingClass", "Reports", 0));
        menuHelp->setTitle(QApplication::translate("TimeTrackingClass", "Help", 0));
        menuEdit->setTitle(QApplication::translate("TimeTrackingClass", "Edit", 0));
        menuRegister->setTitle(QApplication::translate("TimeTrackingClass", "Register", 0));
    } // retranslateUi

};

namespace Ui {
    class TimeTrackingClass: public Ui_TimeTrackingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETRACKING_H
