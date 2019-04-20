#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<QPushButton>
#include<QRadioButton>
#include <QMainWindow>
#include<QVector>
#include<QDebug>
#include<ctime>

namespace Ui {
class Tic_tac_toe;
}

class Tic_tac_toe : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tic_tac_toe(QWidget *parent = nullptr);
    ~Tic_tac_toe();

private:
    Ui::Tic_tac_toe *ui;

    QVector<QPushButton *> field;
    char CompSymbol = 'O';
    char PeopleSymbol = 'X';
    static const int SIZE = 9;
    int coord;

public:
    bool IsLegal(int index);
    bool Win(QString symbol);
    bool Full();
    bool Empty();
    void ShowWin();
    void Clear();
    bool NextMoveWin(char checked_char);

private slots:
    void PeopleMove();
    void CompMove();
    void Move();
    void on_btnStart_clicked();
    void State();
};

#endif // TIC_TAC_TOE_H
