#pragma once

#include "Core.h"

enum class EventType {
    Dummy, KeyPressed, Terminate
};

class Event {
public:
    Event();
    Event(EventType type) : m_eventType(type) {}

    EventType type() { return m_eventType; }
private:
    EventType m_eventType;

    friend class KeyEvent;
};