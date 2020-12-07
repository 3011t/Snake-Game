#pragma once

#include "Core.h"
#include "LinkedList.h"
#include "PlayArea.h"
#include "Direction.h"

// TODO: Implement collisions

class Snake {
public:
    Snake();

    void Update();

    Point getHeadPos();

    void setNextDirection(Direction newDir);

    // This is just plain stupid
    PlayArea createPlayArea();
private:
    void increaseLength(int32_t amount);

    // Update snake positions
    void moveSnake(Direction direction);


    Point m_headPosition;
    int32_t m_length;

    Direction m_nextDirection;

    // TODO: Figure out, how to save the snake intelligently
    //LinkedList<Direction> m_snakePieces;
};