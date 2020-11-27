#pragma once

#include "Core.h"
#include "Window.h"
#include "PlayArea.h"
#include "Snake.h"
#include "Clock.h"

class SnakeGame {
public:
    SnakeGame();

    void Run();
private:
    void Update();
    void handleEvents();
    PlayArea createPlayArea();

    bool m_run = true;
    Clock m_clock;

    Window m_window;
    Snake m_snake;
    Point m_applePosition;
    PlayArea m_playArea;
};