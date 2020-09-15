#pragma once

#include "Core.h"

enum class PointState : int8_t {
    Empty, Apple, Snake, SnakeHead, Wall
};

class PlayArea {
public:
    PlayArea();

    PointState getStateAt(const Point& pos) const;
    void setStateAt(const Point& pos, PointState state);
private:
    std::array<std::array<PointState, 32>, 32> m_area;
};