#ifndef USERLAYOUT_H
#define USERLAYOUT_H
#include<QDialog>

class QLabel;
class QLineEdit;
class QComboBox;
class QTextEdit;
class UserLayout : public QDialog
{
    Q_OBJECT

public:
    UserLayout(QWidget *parent = 0, Qt::WindowFlags flags = 0);
    ~UserLayout();

private:
    QLabel *labUser;
    QLabel *labName;
    QLabel *labSex;
    QLabel *labDepartment;
    QLabel *labAge;
    QLabel *labRemark;
    QLineEdit *edtUser;
    QLineEdit *edtName;
    QComboBox *cbbSex;
    QTextEdit *edtDepartment;
    QLineEdit *edtAge;

    QLabel *labHead;
    QLabel *labIcon;
    QLabel *labIndividual;
    QPushButton *btnChange;
    QTextEdit *edtIndividual;

    QPushButton *btnOk;
    QPushButton *btnCancel;
};

#endif // USERLAYOUT_H
