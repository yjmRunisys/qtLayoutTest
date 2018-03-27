#ifndef YJMLAYOUT_H
#define YJMLAYOUT_H

#include <QWidget>

namespace Ui {
class YjmLayout;
}

class YjmLayout : public QWidget
{
    Q_OBJECT

public:
    explicit YjmLayout(QWidget *parent = 0);
    ~YjmLayout();

private slots:
    void on_pushButtonHideText_clicked();

private:
    Ui::YjmLayout *ui;
};

#endif // YJMLAYOUT_H
