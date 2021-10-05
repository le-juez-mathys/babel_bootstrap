//
// Created by juezu on 9/30/21.
//

#ifndef BABEL_SECOND_WINDOWS_HPP
#define BABEL_SECOND_WINDOWS_HPP
#include "QTCLASS.hpp"
class Seconde_window: public QWidget
{
    Q_OBJECT
    private:
        QLCDNumber *m_lcd;
        QSlider *m_slider;
    private slots:

    public:
        Seconde_window();
        ~Seconde_window();


    void setModal(bool b);
};
#endif //BABEL_SECOND_WINDOWS_HPP
