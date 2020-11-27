#pragma once

// Standard library includes for basic functionality
#include <iostream>
#include <cstdint>
#include <vector>
#include <array>

// SFML Includes

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

struct Point {
    int32_t x = 0;
    int32_t y = 0;
};

enum class Direction {
    NoDir, Up, Down, Left, Right
};