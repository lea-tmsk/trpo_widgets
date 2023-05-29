#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include <QPushButton>
#include "area.h"

class Window : public QWidget {
public:
    Window();

protected:
    QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
};


#endif // WIN_H
