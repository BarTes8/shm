#pragma once

#include <string>

class Ship {
private:
    size_t id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    size_t capacity;
};