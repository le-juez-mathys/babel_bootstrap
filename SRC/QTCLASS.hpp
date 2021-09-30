

#ifndef BABEL_QTCLASS_H
#define BABEL_QTCLASS_H

#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class Connection : public QWidget {
    Q_OBJECT
private:
    QPushButton *set_connection;
    QLabel *set_info;
//Discord * discord = new Discord;
//private slots:
//      void open_Window();
public:
    Connection();
    ~Connection();
    void bouton_connection(void);
    void for_Quite(void);
    void print_text(const QString & text_for_print, const QString & color_for_text, int size, int posX, int posY);


};
#endif //BABEL_QTCLASS_H