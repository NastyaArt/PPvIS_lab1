#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QErrorMessage>
#include <QCheckBox>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QGroupBox *groupall;

    QGroupBox *group1;
    QLineEdit *line1;
    QPushButton *but1;
    QComboBox *combo1;


    QGroupBox *group2;
    QLineEdit *line2;
    QPushButton *but21;
    QPushButton *but22;

    QGroupBox *group3;
    QLineEdit *line3;
    QPushButton *but3;
    QRadioButton *rbut31;
    QRadioButton *rbut32;
    QRadioButton *rbut33;
    QButtonGroup *butgroup3;

    QGroupBox *group4;
    QLineEdit *line4;
    QPushButton *but4;
    QCheckBox *chbox41;
    QCheckBox *chbox42;
    QCheckBox *chbox43;

    QGroupBox *group5;
    QLineEdit *line5;
    QPushButton *but51;
    QPushButton *but52;
    QPushButton *but53;
    QTableWidget *tab5;
    int row;

private slots:

    void TextChanged1(QString str);
    void PushButton1();

    void TextChanged2(QString str);
    void PushButton21();
    void PushButton22();

    void TextChanged3(QString str);
    void PushButton3();

    void TextChanged4(QString str);
    void PushButton4();

    void TextChanged5(QString str);
    void PushButton51();
    void PushButton52();
    void PushButton53();

};

#endif // MAINWINDOW_H
