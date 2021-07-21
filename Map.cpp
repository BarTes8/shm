#include "Map.hpp"

#include <random>

constexpr size_t COORDINATE_MIN = 0;
constexpr size_t COORDINATE_MAX = 100;
constexpr size_t ISLANDS_COUNT = 10;

Map::Map() {
    std::random_device rd;          //will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd());         //standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<size_t> distrib(COORDINATE_MIN, COORDINATE_MAX);

    islands_.reserve(ISLANDS_COUNT);

    while (islands_.size() != ISLANDS_COUNT) {
        auto posX = distrib(gen);
        auto posY = distrib(gen);
        Island::Coordinates coordinates(posX, posY);
    }

}