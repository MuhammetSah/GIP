#include "MyRectangle.h"
#define CIMGGIP_MAIN
#include "CImgGIP05Mock.h"


MyRectangle::MyRectangle(int x1, int y1, int x2, int y2)
    : m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2) {
}

//aufruf aus der Klasse im .h
void MyRectangle::draw() {
    gip_draw_rectangle(m_x1, m_y1, m_x2, m_y2, blue);
}

bool MyRectangle::does_not_collide_with(const MyRectangle& other) const {
    return this->m_x1 > other.m_x2 || this->m_x2 < other.m_x1 || this->m_y1 > other.m_y2 || this->m_y2 < other.m_y1;
}