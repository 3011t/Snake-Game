#include "PlayArea.h"

PlayArea::PlayArea() {
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            m_area[i][j] = PointState::Empty;
        }
        
    }
    
}

PointState PlayArea::getStateAt(const Point& pos) const {
    return m_area[pos.x][pos.y];
}

void PlayArea::setStateAt(const Point& pos, PointState state) {
    m_area[pos.x][pos.y] = state;
}