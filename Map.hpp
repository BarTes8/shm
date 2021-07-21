#pragma once

#include "Island.hpp"

#include <vector>

class Map {
public:
    Map();
    Island* getCurrentPosition() const { return currentPosition_; }

private:
    std::vector<Island> islands_;
    Island* currentPosition_;
};