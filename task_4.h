#ifndef TASK_4_H
#define TASK_4_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

namespace Ui {
class task_4;
}

class task_4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_4(QWidget *parent = 0);
    ~task_4();

private slots:
    void on_calc_clicked();

private:
    QPushButton* m_calc;
    QLineEdit* m_input1;
    QLineEdit* m_input2;
    QLabel* m_result;
};

#endif // TASK_4_H
