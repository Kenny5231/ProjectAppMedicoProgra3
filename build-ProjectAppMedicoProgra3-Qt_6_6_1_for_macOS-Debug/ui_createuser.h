/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *AdministradorDelSistema;
    QLabel *label;
    QPushButton *AdministradorDeSalas;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateUser)
    {
        if (CreateUser->objectName().isEmpty())
            CreateUser->setObjectName("CreateUser");
        CreateUser->resize(800, 600);
        centralwidget = new QWidget(CreateUser);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, -20, 761, 491));
        page = new QWidget();
        page->setObjectName("page");
        AdministradorDelSistema = new QPushButton(page);
        AdministradorDelSistema->setObjectName("AdministradorDelSistema");
        AdministradorDelSistema->setGeometry(QRect(240, 130, 211, 41));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 80, 271, 41));
        AdministradorDeSalas = new QPushButton(page);
        AdministradorDeSalas->setObjectName("AdministradorDeSalas");
        AdministradorDeSalas->setGeometry(QRect(240, 180, 211, 41));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 230, 211, 41));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 280, 211, 41));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 330, 211, 41));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(240, 370, 211, 41));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(240, 420, 211, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        CreateUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        CreateUser->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateUser);
        statusbar->setObjectName("statusbar");
        CreateUser->setStatusBar(statusbar);

        retranslateUi(CreateUser);

        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QMainWindow *CreateUser)
    {
        CreateUser->setWindowTitle(QCoreApplication::translate("CreateUser", "CreateUser", nullptr));
        AdministradorDelSistema->setText(QCoreApplication::translate("CreateUser", "Administraci\303\263n del sistema", nullptr));
        label->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:24pt;\">Menu Principal</span></p></body></html>", nullptr));
        AdministradorDeSalas->setText(QCoreApplication::translate("CreateUser", "Administraci\303\263n de salas", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateUser", "Expedientes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateUser", "Recetas", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreateUser", "Reservaciones", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CreateUser", "Agenda de consultas", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CreateUser", "Reportes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
