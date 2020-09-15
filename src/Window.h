#pragma once

#include "Core.h"
#include "PlayArea.h"
#include "Event.h"

class Window {
public:
    Window();
    ~Window();

    void drawPlayArea(const PlayArea& area) const;

    void close();

    std::vector<Event> getEvents();
private:
    sf::RenderWindow* m_window;
};