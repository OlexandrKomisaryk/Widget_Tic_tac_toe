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
        btn->setStyleSheet("background-color: rgb(89, 153, 255);"
        "border-color: rgb(21, 21, 21);" "color: rgb(170, 0, 0);");
    }
    win_vector.clear();
    move_counter = 0;
}

void Tic_tac_toe::State()
{
    if(ui->rbX->isChecked())
        {
            CompSymbol = 'O';
            PeopleSymbol = 'X';
            ui->rbX->setStyleSheet("color: rgb(0, 100, 0);");
            ui->rbO->setStyleSheet("color: rgb(170, 0, 0);");
        }
     if(ui->rbO->isChecked())
        {
            CompSymbol = 'X';
            PeopleSymbol = 'O';
            ui->rbO->setStyleSheet("color: rgb(0, 100, 0);");
            ui->rbX->setStyleSheet("color: rgb(170, 0, 0);");
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
             if (Win(checked_char))
             {
                 if (checked_char == PeopleSymbol)
                 {
                      field[i]->setText(QString (CompSymbol));
                      field[i]->setEnabled(false);
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

 void Tic_tac_toe::EasyLevel()
 {
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

 void Tic_tac_toe::NormalLevel()
 {
     QVector<int>ArrayPosition = { 4, 0, 2, 6, 8, 1, 3, 5, 7 }; //the priorities of the cells on the field
     std::random_shuffle(ArrayPosition.begin()+1, ArrayPosition.begin()+5);   //randomly mixes cells
     std::random_shuffle(ArrayPosition.begin()+6, ArrayPosition.end()); //with the same priority

     if(move_counter == 0)
     std::random_shuffle(ArrayPosition.begin(), ArrayPosition.begin()+5);

     for (int i = 0; i < SIZE; i++)
     {
          if (IsLegal(ArrayPosition[i]))
          {
              field[ArrayPosition[i]]->setEnabled(false);
              field[ArrayPosition[i]]->setText(QString(CompSymbol));
              break;
           }
     }
 }

 void Tic_tac_toe::HardLevel()
 {
     if( ((move_counter == 3) && (field[4]->text() == QString(CompSymbol)))
     && ((field[0]->text() == QString(PeopleSymbol)) &&  (field[8]->text() == QString(PeopleSymbol)))
     || ((field[2]->text() == QString(PeopleSymbol)) &&  (field[6]->text() == QString(PeopleSymbol))) )
     {
         int temp = 0;
         while (temp == 0)
         {
            coord = rand() % SIZE;
            if (IsLegal(coord) && (coord % 2 == 1))
            {
                field[coord]->setText(QString(CompSymbol));
                field[coord]->setEnabled(false);
                temp = 1;
            }
         }
     }
     else
     {
         NormalLevel();
     }
 }

 void Tic_tac_toe::CompMove()
 {
     QString level = ui->levelBox->currentText();
     srand(time(NULL));
     if (!NextMoveWin(CompSymbol) && (!NextMoveWin(PeopleSymbol)))
     {
        if(level == "Easy")
        {
           EasyLevel();
        }
        if(level == "Normal")
        {
           int temp = rand()%3;
           if(temp % 2 == 0)
              HardLevel();
           else
              NormalLevel();
        }
        if(level == "Hard")
        {
           HardLevel();
        }
        ++move_counter;
     }
 }

 void Tic_tac_toe::PeopleMove()
 {
     QPushButton *btn = qobject_cast<QPushButton *>(sender());
     btn->setText(QString(PeopleSymbol));
     btn->setStyleSheet("background-color: rgb(89, 153, 255);" "border-color: rgb(21, 21, 21);"
             "color: rgb(0, 100, 0);");  //the color of the character that the person plays, will be green
     btn->setEnabled(false);
     ++move_counter;
 }

 void Tic_tac_toe::ShowWin()
 {
     if(Win(CompSymbol))
     {
         ui->ShowResult->setText("Computer win");
         ui->ShowResult->setStyleSheet("color: rgb(170, 0, 0)");
         foreach (int var, win_vector)
         {
            field[var]->setStyleSheet("background-color: rgb(170, 0, 0);"
            "border-color: rgb(21, 21, 21);" "color: rgb(255, 255, 255);");
         }
     }
     if(Win(PeopleSymbol))
     {
         ui->ShowResult->setText("You win");
         ui->ShowResult->setStyleSheet("color: rgb(0, 100, 0)");
         foreach (int var, win_vector)
         {
            field[var]->setStyleSheet("background-color: rgb(0, 100, 0);"
            "border-color: rgb(21, 21, 21);" "color: rgb(255, 255, 255);");
         }
     }
     if((!Win(PeopleSymbol)) && (!Win(CompSymbol)) && Full())
     {
         ui->ShowResult->setText("Game over draw");
         ui->ShowResult->setStyleSheet("color: rgb(0, 0, 200)");
     }

 }

 void Tic_tac_toe::Move()
 {

     PeopleMove();
     if((!Full()) && (!Win(CompSymbol)) && (!Win(PeopleSymbol)))
     {
         CompMove();
     }

     if(Full() || Win(CompSymbol) || Win(PeopleSymbol))
     {
         ui->rbO->setEnabled(true);
         ui->rbX->setEnabled(true);
         ui->levelBox->setEnabled(true);
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
     ui->levelBox->setEnabled(false);
}


bool Tic_tac_toe::Win(char symbol)
{
    win_vector.clear();

    QString target = QString (symbol);
    int temp = 0;
    for (int i = 0; i < SIZE; i += 3)
    {
        if (field[i]->text() == target && field[i + 1]->text() == target &&  field[i + 2]->text() == target)
        {
            temp++;
            win_vector.push_back(i);
            win_vector.push_back(i+1);
            win_vector.push_back(i+2);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (field[i]->text() == target && field[i + 3]->text() == target && field[i + 6]->text() == target)
        {
            temp++;
            win_vector.push_back(i);
            win_vector.push_back(i+3);
            win_vector.push_back(i+6);
        }
    }
    if (field[0]->text() == target && field[4]->text() == target && field[8]->text() == target)
    {
        temp++;
        win_vector.push_back(0);
        win_vector.push_back(4);
        win_vector.push_back(8);
    }
    if (field[2]->text() == target && field[4]->text() == target && field[6]->text() == target)
    {
        temp++;
        win_vector.push_back(2);
        win_vector.push_back(4);
        win_vector.push_back(6);
    }
    return temp == 0 ? false : true;
}
