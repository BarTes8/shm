#pragma once

#include <vector>

class Island;

class Map {
public:
    Island* getCurrentPosition() const { return currentPosition_; }

private:
    std::vector<Island> islands_;
    Island* currentPosition_;
};