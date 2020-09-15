#include "PlayArea.h"

PlayArea::PlayArea() {
    
}

PointState PlayArea::getStateAt(const Point& pos) const {
    return m_area[pos.x][pos.y];
}

void PlayArea::setStateAt(const Point& pos, PointState state) {
    m_area[pos.x][pos.y] = state;
}