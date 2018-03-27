#include <QApplication>

#include "finddialog.h"
#include "userlayout.h"
#include "qqlogint.h"
#include "yjmlayout.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    FindDialog *dialog = new FindDialog;
//    dialog->show();

//    UserLayout *dialogUser = new UserLayout;
//    dialogUser->show();

//    QQLogint *dialogQQ = new QQLogint;
//    dialogQQ->show();

    YjmLayout *dialogYjm = new YjmLayout;
    dialogYjm->show();
    return app.exec();
}
