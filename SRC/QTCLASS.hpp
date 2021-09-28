//
// Created by juezu on 9/28/21.
//

#ifndef BABEL_QTCLASS_H
#define BABEL_QTCLASS_H

#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class Connection : public QWidget {

private:
    QPushButton *set_connection;
    QLabel *set_info;

public:
    Connection();
    ~Connection();
    void bouton_connection();
    void bouton_quite();
    void print_text(const QString & text_for_print, const QString & color_for_text, int size, int posX, int posY);
};
#endif //BABEL_QTCLASS_H