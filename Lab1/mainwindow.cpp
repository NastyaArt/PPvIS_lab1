#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
/*----------------------------Group 1-------------------------------*/
       group1 = new QGroupBox(tr("Group &1"));
       line1 = new QLineEdit;
       but1 = new QPushButton("Добавить");
       but1->setDefault(true);
       but1->setEnabled(false);
       combo1 = new QComboBox;

       QHBoxLayout *lay11 = new QHBoxLayout;
       lay11->addWidget(line1);
       lay11->addWidget(but1);

       QVBoxLayout *lay12 = new QVBoxLayout;
       lay12->addLayout(lay11);
       lay12->addWidget(combo1);

       group1->setLayout(lay12);

       connect(line1, SIGNAL(textChanged(QString)), this, SLOT(TextChanged1(QString)));
       connect(but1, SIGNAL(clicked(bool)), this, SLOT(PushButton1()));


/*----------------------------Group 2-------------------------------*/
       group2 = new QGroupBox(tr("Group &2"));
       line2 = new QLineEdit;
       but21 = new QPushButton("Добавить");
       but21->setDefault(true);
       but21->setEnabled(false);
       but22 = new QPushButton("Поменять");
       but22->setDefault(true);
       but22->setEnabled(false);

       QHBoxLayout *lay21 = new QHBoxLayout;
       lay21->addWidget(but21);
       lay21->addWidget(but22);

       QVBoxLayout *lay22 = new QVBoxLayout;
       lay22->addWidget(line2);
       lay22->addLayout(lay21);

       group2->setLayout(lay22);

       connect(line2, SIGNAL(textChanged(QString)), this, SLOT(TextChanged2(QString)));
       connect(but21, SIGNAL(clicked(bool)), this, SLOT(PushButton21()));
       connect(but22, SIGNAL(clicked(bool)), this, SLOT(PushButton22()));

/*----------------------------Group 3-------------------------------*/
       group3 = new QGroupBox(tr("Group &3"));
       line3 = new QLineEdit;
       but3 = new QPushButton("Пометить");
       but3->setDefault(true);
       but3->setEnabled(false);
       rbut31 = new QRadioButton(tr("Первая метка"));
       rbut32 = new QRadioButton(tr("Вторая метка"));
       rbut33 = new QRadioButton(tr("Третья метка"));
       butgroup3 = new QButtonGroup;

       butgroup3->addButton(rbut31);
       butgroup3->addButton(rbut32);
       butgroup3->addButton(rbut33);


       QVBoxLayout *lay31 = new QVBoxLayout;
       lay31->addWidget(line3);
       lay31->addWidget(but3);

       QVBoxLayout *lay32 = new QVBoxLayout;
       lay32->addWidget(rbut31);
       lay32->addWidget(rbut32);
       lay32->addWidget(rbut33);

       QHBoxLayout *lay33 = new QHBoxLayout;
       lay33->addLayout(lay31);
       lay33->addLayout(lay32);

       group3->setLayout(lay33);

       connect(line3, SIGNAL(textChanged(QString)), this, SLOT(TextChanged3(QString)));
       connect(but3, SIGNAL(clicked(bool)), this, SLOT(PushButton3()));

/*----------------------------Group 4-------------------------------*/

       group4 = new QGroupBox(tr("Group &4"));
       line4 = new QLineEdit;
       but4 = new QPushButton("Пометить");
       but4->setDefault(true);
       but4->setEnabled(false);
       chbox41 = new QCheckBox(tr("Первая метка"));
       chbox42 = new QCheckBox(tr("Вторая метка"));
       chbox43 = new QCheckBox(tr("Третья метка"));

       QVBoxLayout *lay41 = new QVBoxLayout;
       lay41->addWidget(line4);
       lay41->addWidget(but4);

       QVBoxLayout *lay42 = new QVBoxLayout;
       lay42->addWidget(chbox41);
       lay42->addWidget(chbox42);
       lay42->addWidget(chbox43);

       QHBoxLayout *lay43 = new QHBoxLayout;
       lay43->addLayout(lay41);
       lay43->addLayout(lay42);

       group4->setLayout(lay43);

       connect(line4, SIGNAL(textChanged(QString)), this, SLOT(TextChanged4(QString)));
       connect(but4, SIGNAL(clicked(bool)), this, SLOT(PushButton4()));

/*----------------------------Group 5-------------------------------*/

       group5 = new QGroupBox(tr("Group &5"));
       line5 = new QLineEdit;
       but51 = new QPushButton("Добавить");
       but51->setDefault(true);
       but51->setEnabled(false);
       but52 = new QPushButton("Вправо");
       but52->setDefault(true);
       but52->setEnabled(false);
       but53 = new QPushButton("Влево");
       but53->setDefault(true);
       but53->setEnabled(false);
       row=0;

       tab5 = new QTableWidget();
       tab5->setRowCount(10);
       tab5->setColumnCount(2);

       for(int row = 0; row < tab5->rowCount(); row++)
         for(int column = 0; column < tab5->columnCount(); column++)
             tab5->setItem(row, column, new QTableWidgetItem());

       tab5->item(0,0)->setText("Первый столбик");
       tab5->item(0,1)->setText("Второй столбик");

       QVBoxLayout *lay51 = new QVBoxLayout;
       lay51->addWidget(line5);
       lay51->addWidget(but51);
       lay51->addWidget(but52);
       lay51->addWidget(but53);

       QHBoxLayout *lay52 = new QHBoxLayout;
       lay52->addLayout(lay51);
       lay52->addWidget(tab5);

       group5->setLayout(lay52);

       connect(line5, SIGNAL(textChanged(QString)), this, SLOT(TextChanged5(QString)));
       connect(but51, SIGNAL(clicked(bool)), this, SLOT(PushButton51()));
       connect(but52, SIGNAL(clicked(bool)), this, SLOT(PushButton52()));
       connect(but53, SIGNAL(clicked(bool)), this, SLOT(PushButton53()));

/*----------------------------Group All-------------------------------*/

       QVBoxLayout *layall = new QVBoxLayout;
       layall->addWidget(group1);
       layall->addWidget(group2);
       layall->addWidget(group3);
       layall->addWidget(group4);
       layall->addWidget(group5);

       groupall = new QGroupBox;
       groupall->setLayout(layall);

       setCentralWidget(groupall);

}

/*----------------------------Group 1 Slots-------------------------------*/
void MainWindow::TextChanged1(QString str)
{
    but1->setEnabled(!str.isEmpty());
}

void MainWindow::PushButton1()
{
    combo1->addItem(line1->text());
    line1->clear();
}

/*----------------------------Group 2 Slots-------------------------------*/
void MainWindow::TextChanged2(QString str)
{
    but21->setEnabled(!str.isEmpty());
}

void MainWindow::PushButton21()
{
    but21->setText(line2->text());
    line2->setEnabled(false);
    but22->setEnabled(true);
}

void MainWindow::PushButton22()
{

    but21->setDefault(true);
    but21->setEnabled(false);
    but22->setDefault(true);
    but22->setEnabled(false);
    but21->setText(but22->text());
    but22->setText(line2->text());
    line2->setEnabled(true);

}

/*----------------------------Group 3 Slots-------------------------------*/
void MainWindow::TextChanged3(QString str)
{
    but3->setEnabled(!str.isEmpty());
}

void MainWindow::PushButton3()
{
     if(line3->text()==tr("Первая метка"))
          rbut31->setChecked(true);
     else
     if(line3->text()==tr("Вторая метка"))
          rbut32->setChecked(true);
     else
     if(line3->text()==tr("Третья метка"))
          rbut33->setChecked(true);
     else
         (new QErrorMessage(this))->showMessage("Неправильное имя метки!");

}

/*----------------------------Group 4 Slots-------------------------------*/
void MainWindow::TextChanged4(QString str)
{
    but4->setEnabled(!str.isEmpty());
}

void MainWindow::PushButton4()
{
     if(line4->text()==tr("Первая метка"))
          chbox41->setChecked(true);
     else
     if(line4->text()==tr("Вторая метка"))
          chbox42->setChecked(true);
     else
     if(line4->text()==tr("Третья метка"))
          chbox43->setChecked(true);
     else
         (new QErrorMessage(this))->showMessage("Неправильное имя метки!");

}

/*----------------------------Group 5 Slots-------------------------------*/
void MainWindow::TextChanged5(QString str)
{
    but51->setEnabled(!str.isEmpty());
    but52->setEnabled(false);
    but53->setEnabled(false);

}

void MainWindow::PushButton51()
{
    if (row>=9){
        line5->clear();
        line5->setEnabled(false);
        but51->setEnabled(false);
    }
    else{
    row++;
    tab5->item(row,0)->setText(line5->text());
    line5->clear();
    but52->setEnabled(true);
    but51->setEnabled(false);
    }
}

void MainWindow::PushButton52()
{
    but53->setEnabled(true);
    but52->setEnabled(false);
    tab5->item(row,1)->setText(tab5->item(row,0)->text());
    tab5->item(row,0)->setText("");
}

void MainWindow::PushButton53()
{
    but52->setEnabled(true);
    but53->setEnabled(false);
    tab5->item(row,0)->setText(tab5->item(row,1)->text());
    tab5->item(row,1)->setText("");
}


MainWindow::~MainWindow()
{
    delete ui;
}
