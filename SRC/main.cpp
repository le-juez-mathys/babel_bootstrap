
#include "QTCLASS.hpp"

Connection::Connection() : QWidget()
{
    Connection::bouton_connection();
    Connection::for_Quite();
    Connection::print_text("PANNEAU DE CONNECTION", "background-color: green", 12, 1920/2-110, 375);


}

Connection::~Connection()
{

}

/*void Connection::open_window()
{
    Connection * discord = new Connection;
    discord->show();
}
*/
void Connection::bouton_connection()
{
    set_connection = new QPushButton("CONNECTION", this);
    set_connection -> setFont(QFont("Comic Sans MS", 16));
    set_connection -> setCursor(Qt::PointingHandCursor);
    set_connection -> setStyleSheet("background-color: grey");
    set_connection -> move(1920/2, 400);
    //connect(this->interface.pushButton,SIGNAL(clicked()),this,SLOT(open_window()));

}

void Connection::for_Quite()
{
    set_connection = new QPushButton("QUITTER", this);
    set_connection -> setFont(QFont("Comic Sans MS", 16));
    set_connection -> setCursor(Qt::PointingHandCursor);
    set_connection -> setStyleSheet("background-color: grey");
    set_connection -> move(1920/2-130, 400);
    QObject::connect(set_connection, SIGNAL(clicked()), qApp, SLOT(quit()));
}

void Connection::print_text(const QString & text_for_print, const QString & color_for_text, int size, int posX, int posY)
{
    set_info = new QLabel(this);
    set_info -> setText(text_for_print);
    set_info -> setFont(QFont("Comic Sans MS", size));
    set_info -> setStyleSheet(color_for_text);
    set_info -> move(posX, posY);
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    Connection connection;
    connection.show();
    return QApplication::exec();
}

