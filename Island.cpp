#include "Island.hpp"

bool Island::Coordinates::operator==(const Coordinates& position) const {
    return positionX_ == position.positionX_ && positionY_ == position.positionY_;
}