#include "contact.h"

Contact::Contact(QWidget *parent) :
    QWidget(parent)
{
    EmailLabel =new QLabel(tr("E-mail："));
    EmailLineEdit =new QLineEdit;

    AddrLabel =new QLabel(tr("Contact address："));
    AddrLineEdit =new QLineEdit;

    CodeLabel =new QLabel(tr("Postal code："));
    CodeLineEdit =new QLineEdit;

    MoviTelLabel =new QLabel(tr("Mobile phone："));
    MoviTelLineEdit =new QLineEdit;
    MoviTelCheckBook =new QCheckBox(tr("Receive message"));

    ProTelLabel =new QLabel(tr("Office phone："));
    ProTelLineEdit =new QLineEdit;

    mainLayout =new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(EmailLabel,0,0);
    mainLayout->addWidget(EmailLineEdit,0,1);
    mainLayout->addWidget(AddrLabel,1,0);
    mainLayout->addWidget(AddrLineEdit,1,1);
    mainLayout->addWidget(CodeLabel,2,0);
    mainLayout->addWidget(CodeLineEdit,2,1);
    mainLayout->addWidget(MoviTelLabel,3,0);
    mainLayout->addWidget(MoviTelLineEdit,3,1);
    mainLayout->addWidget(MoviTelCheckBook,3,2);
    mainLayout->addWidget(ProTelLabel,4,0);
    mainLayout->addWidget(ProTelLineEdit,4,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
