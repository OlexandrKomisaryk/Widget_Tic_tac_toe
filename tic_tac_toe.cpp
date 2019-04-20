#include "tic_tac_toe.h"
#include "ui_tic_tac_toe.h"
#include<algorithm>

Tic_tac_toe::Tic_tac_toe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tic_tac_toe)
{
    this->setFixedSize(275, 400);

    ui->setupUi(this);
    field.push_back(ui->btn1);
    field.push_back(ui->btn2);
    field.push_back(ui->btn3);
    field.push_back(ui->btn4);
    field.push_back(ui->btn5);
    field.push_back(ui->btn6);
    field.push_back(ui->btn7);
    field.push_back(ui->btn8);
    field.push_back(ui->btn9);

    ui->rbX->setChecked(true);
    ui->rbO->setChecked(false);

    QPushButton *btn;
    foreach (btn, field)
    {
        btn->setText("");
        btn->setEnabled(false);
    }

    connect(ui->btnStart, SIGNAL(clicked()), this, SLOT(on_btnStart_clicked()));

    foreach (btn, field)
    {
        connect(btn, SIGNAL(clicked()), this, SLOT(Move()));
    }

    connect(ui->rbX, SIGNAL(clicked()), this, SLOT(State()));
    connect(ui->rbO, SIGNAL(clicked()), this, SLOT(State()));

}

Tic_tac_toe::~Tic_tac_toe()
{
    delete ui;
}

void Tic_tac_toe::Clear()
{
    QPushButton *btn;
    foreach (btn, field)
    {
        btn->setText("");
        btn->setEnabled(true);
    }
}

void Tic_tac_toe::State()
{
    if(ui->rbX->isChecked())
        {
            CompSymbol = 'O';
            PeopleSymbol = 'X';
        }
     if(ui->rbO->isChecked())
        {
            CompSymbol = 'X';
            PeopleSymbol = 'O';
        }
}

 bool Tic_tac_toe::IsLegal(int index)
 {
    return field[index]->text() == "";
 }

 bool Tic_tac_toe::Full()
 {
     int temp = 0;
     for (int i = 0; i < SIZE; i++)
     {
         if (field[i]->text() != "")
             temp++;
         else
             break;
     }
     return (temp == 9) ? true : false;
 }

 bool Tic_tac_toe::Empty()
 {
     int temp = 0;
     for (int i = 0; i < SIZE; i++)
     {
         if (field[i]->text() == "")
             temp++;
         else
             break;
     }
     return (temp == 9) ? true : false;
 }

 bool Tic_tac_toe::NextMoveWin(char checked_char) //If in the next step the computer wins, it does this step.
 {												 //If the computer does not win in the next step,
     int i;									     //but a person wins, then the computer blocks its step.
     for (i = 0; i < SIZE; i++)
     {
         if (IsLegal(i))
         {
             field[i]->setText(QString (checked_char));
             if (Win( QString(checked_char)))
             {
                 if (checked_char == PeopleSymbol)
                 {
                      field[i]->setText(QString (CompSymbol));
                 }
                 break;
             }
             else
             {
                  field[i]->setText("");
             }
         }
     }
     return (i < SIZE);

 }



 void Tic_tac_toe::CompMove()
 {
     if (!NextMoveWin(CompSymbol) && (!NextMoveWin(PeopleSymbol)))
     {
         QString level = ui->levelBox->currentText();
        if(level == "Easy")
        {
             srand(time(NULL));
             int temp = 0;
             while (temp == 0)
             {
                coord = rand() % SIZE;
                if (IsLegal(coord))
                {
                    field[coord]->setText(QString(CompSymbol));
                    field[coord]->setEnabled(false);
                    temp = 1;
                }
            }
        }
        if(level == "Hard")
        {
           QVector<int>ArrayPosition = { 4, 0, 2, 6, 8, 1, 3, 5, 7 }; //the priorities of the cells on the field
           std::random_shuffle(ArrayPosition.begin()+1, ArrayPosition.begin()+4);   //randomly mixes cells
           std::random_shuffle(ArrayPosition.begin()+5, ArrayPosition.begin()+8); //with the same priority

           if(Empty())
           std::random_shuffle(ArrayPosition.begin(), ArrayPosition.begin()+4);

           for (int i = 0; i < SIZE; i++)
           {
                if (IsLegal(ArrayPosition[i]))
                {
                    field[ArrayPosition[i]]->setText(QString(CompSymbol));
                    break;
                 }
           }
        }
     }
 }

 void Tic_tac_toe::PeopleMove()
 {
     QPushButton *btn = qobject_cast<QPushButton *>(sender());
     btn->setText(QString(PeopleSymbol));
     btn->setEnabled(false);
 }

 void Tic_tac_toe::ShowWin()
 {
     if(Win(QString (CompSymbol)))
         ui->ShowResult->setText("Computer win");
     if(Win(QString (PeopleSymbol)))
         ui->ShowResult->setText("You win");
     if((!Win(QString (PeopleSymbol))) && (!Win(QString (CompSymbol))) && Full())
         ui->ShowResult->setText("Game over draw");
 }

 void Tic_tac_toe::Move()
 {
     PeopleMove();
     if((!Full()) && (!Win("X")) && (!Win("O")))
     {
         CompMove();
     }
     if(Full() || Win("X") || Win("O"))
     {
         ui->rbO->setEnabled(true);
         ui->rbX->setEnabled(true);
         foreach (QPushButton *btn, field)
         {
             btn->setEnabled(false);
         }
     }
    ShowWin();
 }

void Tic_tac_toe::on_btnStart_clicked()
{
     Clear();

     ui->ShowResult->setText("");

     if(ui->rbO->isChecked())
     {
         CompMove();
     }
     ui->rbO->setEnabled(false);
     ui->rbX->setEnabled(false);
}


bool Tic_tac_toe::Win(QString symbol)
{
    int temp = 0;
    for (int i = 0; i < SIZE; i += 3)
    {
        if (field[i]->text() == symbol && field[i + 1]->text() == symbol &&  field[i + 2]->text() == symbol)
        {
            temp++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (field[i]->text() == symbol && field[i + 3]->text() == symbol && field[i + 6]->text() == symbol)
        {
            temp++;
        }
    }
    if (field[0]->text() == symbol && field[4]->text() == symbol && field[8]->text() == symbol)
    {
        temp++;
    }
    if (field[2]->text() == symbol && field[4]->text() == symbol && field[6]->text() == symbol)
    {
        temp++;
    }
        return temp <= 0 ? false : true;
}
