#include "Clock.h"

Clock::Clock() {
    m_prevTime = m_clock.getElapsedTime();
}

int Clock::getDelta() {
    return (m_clock.getElapsedTime().asMilliseconds() - m_prevTime.asMilliseconds());
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