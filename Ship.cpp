#include "Ship.hpp"

#include <iostream>

Ship& Ship::operator+=(size_t crew) {
    if (crew_ + crew > maxCrew_) {
        std::cerr << "Too many papayas\n";
        return *this;
    }
    crew_ += crew;
    return *this;
}