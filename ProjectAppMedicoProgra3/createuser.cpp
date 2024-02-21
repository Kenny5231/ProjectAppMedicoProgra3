#include "createuser.h"
#include "ui_createuser.h"

CreateUser::CreateUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreateUser)
{
    ui->setupUi(this);
}

CreateUser::~CreateUser()
{
    delete ui;
}
