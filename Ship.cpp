#include "Ship.hpp"

#include <iostream>

Ship& Ship::operator+=(const size_t crew) {
    if (crew_ + crew > maxCrew_) {
        std::cerr << "Too many papayas\n";
        return *this;
    }
    crew_ += crew;
    return *this;
}

Ship& Ship::operator-=(const size_t crew) {
    if (crew_ < crew) {
        std::cerr << "Number of papayas can't be lower than 0\n";
        return *this;
    }
    crew_ -= crew;
    return *this;
}