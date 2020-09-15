#include "Clock.h"

Clock::Clock() {
    resetTimer();
}

int Clock::getDelta() {
    return (m_prevTime.asMilliseconds() - m_clock.getElapsedTime().asMilliseconds());
}

bool Clock::updateTime() {
    return (getDelta() >= m_msDelta);
}

void Clock::resetTimer() {
    m_prevTime = m_clock.getElapsedTime();
}

void Clock::setDelta(int newDelta) {
    m_msDelta = newDelta;
}