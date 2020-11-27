#pragma once

#include "Core.h"
#include "Window.h"
#include "PlayArea.h"
#include "Snake.h"
#include "Clock.h"
#include "Direction.h"

class SnakeGame {
public:
    SnakeGame();

    void Run();
private:
    // This function dictates what happens every "tick"
    void Update();

    // This will probably be useless
    void handleEvents();

    // Generate Displayable play area from snake/apple info
    PlayArea createPlayArea();

    bool m_run = true;
    Clock m_clock;

    // Wrapper for a SFML Window
    Window m_window;

    // This holds information on the snake
    //      -> position of its head and all the continuing pieces relative to previous piece
    //      -> position of the apple
    Snake m_snake;
    Point m_applePosition;

    // TODO: get rid of this
    PlayArea m_playArea;
};