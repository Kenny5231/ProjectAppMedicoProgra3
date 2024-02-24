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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menuPrincipal;
    QPushButton *AdministradorDelSistema;
    QLabel *label;
    QPushButton *AdministradorDeSalas;
    QPushButton *Expedientes;
    QPushButton *Recetas;
    QPushButton *Reservaciones;
    QPushButton *AgendaDeConsultas;
    QPushButton *Reportes;
    QWidget *page_2;
    QLabel *label_2;
    QPushButton *CrearUser;
    QPushButton *UserDown;
    QPushButton *BackAdminSystem;
    QWidget *page;
    QLabel *label_3;
    QLineEdit *NameUserCreate;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *UserCuentaCreate;
    QLineEdit *UserRolCreate;
    QLabel *label_6;
    QPushButton *CreateUserBT;
    QWidget *page_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *NameUserEdit;
    QPushButton *pushButton_2;
    QLabel *label_21;
    QLineEdit *CuentaUserEdit;
    QWidget *page_4;
    QLabel *label_9;
    QPushButton *NewExpedienteExpedientes;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_5;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QCalendarWidget *calendarWidget;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_5;
    QLabel *label_15;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_17;
    QLineEdit *lineEdit_8;
    QLabel *label_18;
    QLineEdit *lineEdit_9;
    QLabel *label_19;
    QLabel *label_20;
    QTextBrowser *textBrowser;
    QLabel *label_16;
    QTextBrowser *textBrowser_2;
    QPushButton *SaveExpedienteBT;
    QPushButton *pushButton_5;
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
        stackedWidget->setGeometry(QRect(0, 30, 761, 521));
        menuPrincipal = new QWidget();
        menuPrincipal->setObjectName("menuPrincipal");
        AdministradorDelSistema = new QPushButton(menuPrincipal);
        AdministradorDelSistema->setObjectName("AdministradorDelSistema");
        AdministradorDelSistema->setGeometry(QRect(240, 130, 211, 41));
        label = new QLabel(menuPrincipal);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 80, 271, 41));
        AdministradorDeSalas = new QPushButton(menuPrincipal);
        AdministradorDeSalas->setObjectName("AdministradorDeSalas");
        AdministradorDeSalas->setGeometry(QRect(240, 180, 211, 41));
        Expedientes = new QPushButton(menuPrincipal);
        Expedientes->setObjectName("Expedientes");
        Expedientes->setGeometry(QRect(240, 230, 211, 41));
        Recetas = new QPushButton(menuPrincipal);
        Recetas->setObjectName("Recetas");
        Recetas->setGeometry(QRect(240, 280, 211, 41));
        Reservaciones = new QPushButton(menuPrincipal);
        Reservaciones->setObjectName("Reservaciones");
        Reservaciones->setGeometry(QRect(240, 330, 211, 41));
        AgendaDeConsultas = new QPushButton(menuPrincipal);
        AgendaDeConsultas->setObjectName("AgendaDeConsultas");
        AgendaDeConsultas->setGeometry(QRect(240, 370, 211, 41));
        Reportes = new QPushButton(menuPrincipal);
        Reportes->setObjectName("Reportes");
        Reportes->setGeometry(QRect(240, 420, 211, 41));
        stackedWidget->addWidget(menuPrincipal);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 30, 341, 51));
        CrearUser = new QPushButton(page_2);
        CrearUser->setObjectName("CrearUser");
        CrearUser->setGeometry(QRect(270, 110, 151, 41));
        UserDown = new QPushButton(page_2);
        UserDown->setObjectName("UserDown");
        UserDown->setGeometry(QRect(260, 170, 181, 41));
        BackAdminSystem = new QPushButton(page_2);
        BackAdminSystem->setObjectName("BackAdminSystem");
        BackAdminSystem->setGeometry(QRect(280, 240, 121, 41));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 30, 321, 41));
        NameUserCreate = new QLineEdit(page);
        NameUserCreate->setObjectName("NameUserCreate");
        NameUserCreate->setGeometry(QRect(210, 110, 191, 31));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 90, 171, 16));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 160, 131, 20));
        UserCuentaCreate = new QLineEdit(page);
        UserCuentaCreate->setObjectName("UserCuentaCreate");
        UserCuentaCreate->setGeometry(QRect(210, 190, 191, 31));
        UserRolCreate = new QLineEdit(page);
        UserRolCreate->setObjectName("UserRolCreate");
        UserRolCreate->setGeometry(QRect(210, 250, 191, 31));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 230, 161, 16));
        CreateUserBT = new QPushButton(page);
        CreateUserBT->setObjectName("CreateUserBT");
        CreateUserBT->setGeometry(QRect(260, 300, 100, 32));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 20, 271, 51));
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(220, 100, 281, 16));
        NameUserEdit = new QLineEdit(page_3);
        NameUserEdit->setObjectName("NameUserEdit");
        NameUserEdit->setGeometry(QRect(220, 120, 151, 31));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 410, 121, 41));
        label_21 = new QLabel(page_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(220, 160, 191, 16));
        CuentaUserEdit = new QLineEdit(page_3);
        CuentaUserEdit->setObjectName("CuentaUserEdit");
        CuentaUserEdit->setGeometry(QRect(220, 180, 151, 31));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 30, 201, 51));
        NewExpedienteExpedientes = new QPushButton(page_4);
        NewExpedienteExpedientes->setObjectName("NewExpedienteExpedientes");
        NewExpedienteExpedientes->setGeometry(QRect(290, 120, 141, 41));
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 200, 191, 41));
        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(320, 400, 101, 41));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_10 = new QLabel(page_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 20, 201, 41));
        label_11 = new QLabel(page_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 60, 191, 16));
        lineEdit_3 = new QLineEdit(page_5);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 80, 141, 31));
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 120, 201, 20));
        lineEdit_4 = new QLineEdit(page_5);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 140, 141, 31));
        calendarWidget = new QCalendarWidget(page_5);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(10, 200, 304, 181));
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 180, 121, 16));
        label_14 = new QLabel(page_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 380, 191, 16));
        lineEdit_5 = new QLineEdit(page_5);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(10, 400, 161, 31));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 430, 171, 16));
        lineEdit_6 = new QLineEdit(page_5);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(10, 450, 141, 31));
        lineEdit_7 = new QLineEdit(page_5);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(570, 90, 131, 31));
        label_17 = new QLabel(page_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(570, 130, 161, 21));
        lineEdit_8 = new QLineEdit(page_5);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(570, 150, 161, 31));
        label_18 = new QLabel(page_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(570, 180, 121, 21));
        lineEdit_9 = new QLineEdit(page_5);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(570, 200, 151, 31));
        label_19 = new QLabel(page_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(570, 240, 131, 16));
        label_20 = new QLabel(page_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(570, 360, 141, 16));
        textBrowser = new QTextBrowser(page_5);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(570, 380, 191, 81));
        label_16 = new QLabel(page_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(570, 70, 211, 21));
        textBrowser_2 = new QTextBrowser(page_5);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(570, 260, 201, 91));
        SaveExpedienteBT = new QPushButton(page_5);
        SaveExpedienteBT->setObjectName("SaveExpedienteBT");
        SaveExpedienteBT->setGeometry(QRect(350, 490, 100, 32));
        pushButton_5 = new QPushButton(page_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 490, 100, 32));
        stackedWidget->addWidget(page_5);
        CreateUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        CreateUser->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateUser);
        statusbar->setObjectName("statusbar");
        CreateUser->setStatusBar(statusbar);

        retranslateUi(CreateUser);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QMainWindow *CreateUser)
    {
        CreateUser->setWindowTitle(QCoreApplication::translate("CreateUser", "CreateUser", nullptr));
        AdministradorDelSistema->setText(QCoreApplication::translate("CreateUser", "Administraci\303\263n del sistema", nullptr));
        label->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:24pt;\">Menu Principal</span></p></body></html>", nullptr));
        AdministradorDeSalas->setText(QCoreApplication::translate("CreateUser", "Administraci\303\263n de salas", nullptr));
        Expedientes->setText(QCoreApplication::translate("CreateUser", "Expedientes", nullptr));
        Recetas->setText(QCoreApplication::translate("CreateUser", "Recetas", nullptr));
        Reservaciones->setText(QCoreApplication::translate("CreateUser", "Reservaciones", nullptr));
        AgendaDeConsultas->setText(QCoreApplication::translate("CreateUser", "Agenda de consultas", nullptr));
        Reportes->setText(QCoreApplication::translate("CreateUser", "Reportes", nullptr));
        label_2->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:24pt;\">Administracion Del Sistema</span></p></body></html>", nullptr));
        CrearUser->setText(QCoreApplication::translate("CreateUser", "Crear nuevo usuario", nullptr));
        UserDown->setText(QCoreApplication::translate("CreateUser", "Dar de baja a un usuario", nullptr));
        BackAdminSystem->setText(QCoreApplication::translate("CreateUser", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:36pt;\">Crear nuevo usuario</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("CreateUser", "Ingrese su Nombre:", nullptr));
        label_5->setText(QCoreApplication::translate("CreateUser", "Ingrese  su Cuenta:", nullptr));
        label_6->setText(QCoreApplication::translate("CreateUser", "Ingrese su Rol:", nullptr));
        CreateUserBT->setText(QCoreApplication::translate("CreateUser", "Regresar", nullptr));
        label_7->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:24pt;\">Dar de baja a un usuario</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("CreateUser", "Ingrese el Nombre del que quiere dar de baja:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateUser", "Back", nullptr));
        label_21->setText(QCoreApplication::translate("CreateUser", "Ingrese la cuenta del User:", nullptr));
        label_9->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:36pt;\">Expedientes</span></p></body></html>", nullptr));
        NewExpedienteExpedientes->setText(QCoreApplication::translate("CreateUser", "Nuevo expediente", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreateUser", "Agregar datos al expediente", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CreateUser", "Regresar", nullptr));
        label_10->setText(QCoreApplication::translate("CreateUser", "<html><head/><body><p><span style=\" font-size:24pt;\">Nuevo expediente</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("CreateUser", "Ingrese el nombre del Paciente:", nullptr));
        label_12->setText(QCoreApplication::translate("CreateUser", "Ingrese la identidad del paciente:", nullptr));
        label_13->setText(QCoreApplication::translate("CreateUser", "Ingrese la fecha:", nullptr));
        label_14->setText(QCoreApplication::translate("CreateUser", "Ingrese el numero de telefono:", nullptr));
        label_15->setText(QCoreApplication::translate("CreateUser", "Nombre contacto adicional:", nullptr));
        label_17->setText(QCoreApplication::translate("CreateUser", "Email contacto adicional:", nullptr));
        label_18->setText(QCoreApplication::translate("CreateUser", "Tipo de sangre:", nullptr));
        label_19->setText(QCoreApplication::translate("CreateUser", "Alergias conocidas:", nullptr));
        label_20->setText(QCoreApplication::translate("CreateUser", "Enfermedades base:", nullptr));
        label_16->setText(QCoreApplication::translate("CreateUser", "Telefono de contacto adicional:", nullptr));
        SaveExpedienteBT->setText(QCoreApplication::translate("CreateUser", "Guardar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CreateUser", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
