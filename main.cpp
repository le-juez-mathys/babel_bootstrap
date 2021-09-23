#include <iostream>

#include <qapplication.h>
#include <qpushbutton.h>


int main(int argc, char **argv)
{
    QApplication Fenetre(argc, argv);

    QPushButton Bouton_hello("Hello world!", 0);
    Bouton_hello.resize(100, 30);

    Bouton_hello.show();
    return QApplication::exec();
}

