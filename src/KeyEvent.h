#pragma once

#include "Event.h"

// Enum containing basic heys that might be useful while running the Game, more might be added later
enum class Key {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
    Up, Down, Left, Right, Esc, Enter,
};

class KeyEvent : public Event {
public:
    KeyEvent();
    KeyEvent(EventType type) {
        // I'm dissapointed that the faster variant isn't possible
        m_eventType = type;
    }
    KeyEvent(EventType type, Key key) : m_keyPressed(key) {
        m_eventType = type;        
    }

    Key Pressed() { return m_keyPressed; }
protected:
private:
    Key m_keyPressed;
};