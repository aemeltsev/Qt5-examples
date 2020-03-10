#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Note)
{
    ui->setupUi(this);

    listQRB << ui->answer1Button;
    listQRB << ui->answer2Button;
    listQRB << ui->answer3Button;
    listQRB << ui->answer4Button;

    connect(ui->answerButton, &QPushButton::clicked, this, &Note::press_pbtn_01);
}

Note::~Note()
{
    delete ui;
}

void Note::press_pbtn_01()
{
    int x = 3;//В x номер правильного ответа
    QString str = "This is the wrong answer!";
    if(listQRB.at(x-1)->isChecked()||listQRB.at(x)->isChecked())
            str = "This is the correct answer!";
    ui->labelAnswer->setText(str);
}
