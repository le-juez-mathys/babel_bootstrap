

#ifndef BABEL_QTCLASS_H
#define BABEL_QTCLASS_H

#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QObject>
#include <QLCDNumber>
#include <QSlider>

class Connection : public QWidget
{
    Q_OBJECT
    private:
        QPushButton *_bConnec;
        QPushButton *_bQuite;
        QLabel *_tInfo;

    public slots:
        void open_Window(int argc, char **argv);
    public:
        Connection();
        ~Connection();
        void bouton_connection();
        void for_Quite(void);
        void print_text(const QString & text_for_print, const QString & color_for_text, int size, int posX, int posY);

};
#endif //BABEL_QTCLASS_H