#include "Snake.h"

Direction reverseDirection(Direction in) {
    if (in == Direction::Up) return Direction::Down;
    if (in == Direction::Down) return Direction::Up;
    if (in == Direction::Left) return Direction::Right;
    if (in == Direction::Right) return Direction::Left;

    return Direction::NoDir;
}


Snake::Snake() {
    
}

void Snake::Update() {
    if (m_nextDirection != Direction::NoDir) {
        moveSnake(m_nextDirection);
    }


}

Point Snake::getHeadPos() {
    return m_headPosition;
}

void Snake::setNextDirection(Direction newDir) {
    m_nextDirection = newDir;
}

PlayArea Snake::createPlayArea() {
    return PlayArea();
}

void Snake::increaseLength(int32_t amount) {
    m_length += amount;
}

void Snake::moveSnake(Direction direction) {

    //m_snake.pushFront(reverseDirection(m_nextDirection));

    //if (m_length <= m_snake.Length()) m_snake.popBack();
}