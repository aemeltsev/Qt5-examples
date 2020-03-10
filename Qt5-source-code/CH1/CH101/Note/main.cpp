#include "note.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Note w;
    w.show();

    return a.exec();
}
