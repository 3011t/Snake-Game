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

    bool m_run = true;
    Clock m_clock;

    Window m_window;
    Snake m_snake;
    PlayArea m_playArea;
};