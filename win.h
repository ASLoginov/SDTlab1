#ifndef WIN_H
#define WIN_H

#include "area.h"

class win : public QWidget
{
    Q_OBJECT

protected:
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    win();
};
#endif // WIN_H
