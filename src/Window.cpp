#include "Window.h"

Window::Window() {
    m_window = new sf::RenderWindow(sf::VideoMode(320, 320), "Snake Game");
}

Window::~Window() {
    m_window->close();

    delete m_window;
}

void Window::drawPlayArea(const PlayArea& area) const {
    sf::RectangleShape square(sf::Vector2f(10.f, 10.f));
    
    m_window->clear(sf::Color::Black);

    for ( int i = 0; i < 32; ++i ) {
        for ( int j = 0; j < 32; ++j ) {
            PointState tempState = area.getStateAt({ i, j });
            if ( tempState != PointState::Empty ) {
                if ( tempState == PointState::Snake ) square.setFillColor(sf::Color::Green);
                else if ( tempState == PointState::SnakeHead ) square.setFillColor(sf::Color::Cyan);
                else if ( tempState == PointState::Apple ) square.setFillColor(sf::Color::Red);

                square.setPosition(sf::Vector2f(10 * i, 10 * j));

                m_window->draw(square);
            }
        }
    }

    m_window->display();
}

std::vector<Event> Window::getEvents() {
    sf::Event event;

    std::vector<Event> events;

    while(m_window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) events.push_back(Event(EventType::Terminate));
    }

    return events;
}