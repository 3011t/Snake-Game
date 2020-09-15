#pragma once

#include "Core.h"

class Clock {
public:
    Clock();

    bool updateTime();
    void resetTimer();

    void setDelta(int newDelta);
private:
    int getDelta();

    int m_msDelta = 20;

    sf::Clock m_clock;
    sf::Time m_prevTime;
};