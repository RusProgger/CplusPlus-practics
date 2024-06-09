#ifndef REG_H
#define REG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class reg;
}
QT_END_NAMESPACE

class reg : public QMainWindow
{
    Q_OBJECT

public:
    reg(QWidget *parent = nullptr);
    ~reg();

private:
    Ui::reg *ui;
};
#endif // REG_H
