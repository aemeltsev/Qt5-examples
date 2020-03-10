#ifndef NOTE_H
#define NOTE_H

#include <QMainWindow>
#include <QRadioButton>
#include <qmath.h>

namespace Ui {
class Note;
}

class Note : public QMainWindow
{
    Q_OBJECT

public:
    explicit Note(QWidget *parent = nullptr);
    ~Note();

    QList<QRadioButton *> listQRB;

private:
    Ui::Note *ui;

public slots:
    void press_pbtn_01();
};

#endif // NOTE_H
