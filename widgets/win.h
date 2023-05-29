#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include <QWidget>
#include <QLabel>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>

class Win : public QWidget {
    Q_OBJECT
public:
    Win(QWidget *parent = 0);

public slots:
    void begin();
    void calc();

protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;
};

class StrValidator:public QValidator {
public:
    StrValidator(QObject *parent):QValidator(parent) {}

    virtual State validate(QString &str,int &pos)const {
        return Acceptable;
    }
};

#endif // WIN_H
