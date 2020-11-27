#pragma once

#include "Core.h"
#include "LinkedList.h"
#include "PlayArea.h"

class Snake {
public:
    Snake();

    void Update();

    Point getHeadPos();

    void setNextDirection(Direction newDir);

    PlayArea createPlayArea();
private:
    void increaseLength(int32_t amount);
    void moveSnake();


    Point m_headPosition;
    int32_t m_length;

    Direction m_nextDirection;

    //LinkedList<Direction> m_snake;
};