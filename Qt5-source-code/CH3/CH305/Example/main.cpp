#include "content.h"
#include <QApplication>
#include <QTextCodec>
#include <QSplitter>
#include <QListWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL KaitiM GB",12);
    a.setFont(font);

    QSplitter *splitterMain =new QSplitter(Qt::Horizontal, nullptr);
    splitterMain->setOpaqueResize(true);
    QListWidget *list =new QListWidget(splitterMain);
    list->insertItem(0,QObject::tr("Basic Information"));
    list->insertItem(1,QObject::tr("Contact Details"));
    list->insertItem(2,QObject::tr("Details"));

    Content *content =new Content(splitterMain);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),content->stack,SLOT(setCurrentIndex(int)));

    splitterMain->setWindowTitle(QObject::tr("Modify user profile"));
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();
    
    return a.exec();
}
