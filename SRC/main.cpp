
#include "QTCLASS.hpp"
#include "Second_Windows.hpp"

Connection::Connection() : QWidget()
{
    Connection::bouton_connection();
    Connection::for_Quite();
    Connection::print_text("PANNEAU DE CONNECTION", "background-color: green", 12, 1920/2-110, 375);

}

Connection::~Connection()
{
     delete _bConnec;
     delete _bQuite;
     delete _tInfo;
}


void Connection::bouton_connection()
{
    _bConnec = new QPushButton("CONNECTION", this);
    _bConnec -> setFont(QFont("Comic Sans MS", 16));
    _bConnec -> setCursor(Qt::PointingHandCursor);
    _bConnec -> setStyleSheet("background-color: grey");
    _bConnec -> move(1920/2, 400);
    Seconde_window window1;
    window1.exec();git

}

void Connection::for_Quite()
{
    _bQuite = new QPushButton("QUITTER", this);
    _bQuite -> setFont(QFont("Comic Sans MS", 16));
    _bQuite -> setCursor(Qt::PointingHandCursor);
    _bQuite -> setStyleSheet("background-color: grey");
    _bQuite -> move(1920/2-130, 400);
    QObject::connect(_bQuite, SIGNAL(clicked()), qApp, SLOT(quit()));
}

void Connection::print_text(const QString & text_for_print, const QString & color_for_text, int size, int posX, int posY)
{
    _tInfo = new QLabel(this);
    _tInfo -> setText(text_for_print);
    _tInfo -> setFont(QFont("Comic Sans MS", size));
    _tInfo -> setStyleSheet(color_for_text);
    _tInfo -> move(posX, posY);
}

void Connection::open_Window(int argc, char **argv)
{
    QApplication app(argc, argv);
    Seconde_window window1;
    window1.show();
    this->hide();
}


int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    Connection connection;
    connection.show();
    return QApplication::exec();
}

