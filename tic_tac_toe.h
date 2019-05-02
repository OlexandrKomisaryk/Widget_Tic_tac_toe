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
    QVector<int> win_vector; //contains cell numbers that form a winning combination
    char CompSymbol = 'O';
    char PeopleSymbol = 'X';
    static const int SIZE = 9;
    int coord;
    int move_counter = 0;

private:
    bool IsLegal(int index);
    bool Win(char symbol);
    bool Full();
    bool Empty();
    void ShowWin();
    void Clear();
    void PeopleMove();
    void CompMove();
    bool NextMoveWin(char checked_char);
    void EasyLevel();
    void NormalLevel();
    void HardLevel();


private slots:
    void Move();
    void on_btnStart_clicked();
    void State();
};

#endif // TIC_TAC_TOE_H
