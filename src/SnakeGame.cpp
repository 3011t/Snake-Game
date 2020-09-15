#include "SnakeGame.h"

SnakeGame::SnakeGame() {
    m_playArea.setStateAt({ 0, 0 }, PointState::SnakeHead);
    for (int i = 1; i < 10; ++i) {
        m_playArea.setStateAt({ 0, i }, PointState::Snake);
    }

    m_playArea.setStateAt({ 5, 5 }, PointState::Apple);
}

// method holding main game loop
void SnakeGame::Run() {
    while( m_run &&  m_clock.updateTime()) {

        Update();

        m_clock.resetTimer();
    }
}

void SnakeGame::Update() {
    //this will be moved to some kind of processEvents function
    std::vector<Event> events = m_window.getEvents();

    for ( Event event : events) if ( event.type() == EventType::Terminate ) {
        m_run = false;
        m_window.close();
    }

    m_window.drawPlayArea(m_playArea);
}