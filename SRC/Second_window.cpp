//
// Created by juezu on 10/5/21.
//

#include "Second_Windows.hpp"


Seconde_window::Seconde_window() : QWidget()
{
    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(50, 20);
    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;

}

Seconde_window::~Seconde_window()
{
    delete m_lcd;
    delete m_slider;
}


