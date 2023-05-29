#ifndef FIGURA_H
#define FIGURA_H
#include <QtGui>

class Figura {
public:
    Figura(int X, int Y, int Halflen) : x(X), y(Y), halflen(Halflen) {}
    void move(float Alpha, QPainter *Painter);

protected:
    int x, y, halflen, dx, dy, r;
    virtual void draw(QPainter *Painter) = 0;
};

class MyLine : public Figura {
public:
    MyLine(int x, int y, int halflen) : Figura(x, y, halflen) {}

protected:
    void draw(QPainter *Painter);
};

class MyRect : public Figura {
public:
    MyRect(int x, int y, int halflen) : Figura(x, y, halflen) {}

protected:
    void draw(QPainter *Painter);
};


#endif // FIGURA_H
