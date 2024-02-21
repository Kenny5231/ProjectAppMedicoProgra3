#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CreateUser;
}
QT_END_NAMESPACE

class CreateUser : public QMainWindow
{
    Q_OBJECT

public:
    CreateUser(QWidget *parent = nullptr);
    ~CreateUser();

private:
    Ui::CreateUser *ui;
};
#endif // CREATEUSER_H
