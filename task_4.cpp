#include "task_4.h"

task_4::task_4(QWidget *parent) :
    QMainWindow(parent)
{
    m_calc = new QPushButton("Calculate",this);
    m_calc->setGeometry(QRect(QPoint(60,30),QSize(50,20)));

    m_input1 = new QLineEdit(this);
    m_input1->setGeometry(QRect(QPoint(10,30),QSize(40,20)));

    m_input2 = new QLineEdit(this);
    m_input2->setGeometry(QRect(QPoint(10,60),QSize(40,20)));

    m_result = new QLabel(this);
    m_result->setGeometry(QRect(QPoint(60,60),QSize(50,20)));

    connect(m_calc, SIGNAL(clicked()), this ,SLOT(on_calc_clicked()));
}

task_4::~task_4()
{
    delete m_calc;
    delete m_input1;
    delete m_input2;
    delete m_result;
}

void task_4::on_calc_clicked()
{
    double d = m_input1->text().toDouble()*m_input2->text().toDouble();
    m_result->setText(QString::number(d));
}
