#pragma once

#include <cstddef>

class Island {
public:
    class Coordinates {
    public:
        Coordinates(size_t positionX, size_t positionY)
            : positionX_(positionX)
            , positionY_(positionY)
        {}
        
    private:
        size_t positionX_;
        size_t positionY_;
    };

    Coordinates getPosition() const { return position_; }

private:
    Coordinates position_;
};