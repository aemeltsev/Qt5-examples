//Added header files
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QCheckBox>
class Contact : public QWidget
{
    Q_OBJECT
public:
    Contact(QWidget *parent=nullptr);
private:
    QLabel *EmailLabel;
    QLineEdit *EmailLineEdit;
    QLabel *AddrLabel;
    QLineEdit *AddrLineEdit;
    QLabel *CodeLabel;
    QLineEdit *CodeLineEdit;
    QLabel *MoviTelLabel;
    QLineEdit *MoviTelLineEdit;
    QCheckBox *MoviTelCheckBook;
    QLabel *ProTelLabel;
    QLineEdit *ProTelLineEdit;
    QGridLayout *mainLayout;
};

