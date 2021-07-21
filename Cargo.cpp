#include "Cargo.hpp"

#include <iostream>

Cargo& Cargo::operator+=(size_t amount) {
    amount_ += amount;
    return *this;
}

Cargo& Cargo::operator-=(size_t amount) {
    if (amount_ < amount) {
        std::cerr << "You can't subtract more than you have\n";
        return *this;
    }
    amount_ -= amount;
    return *this;
}

bool Cargo::operator==(const Cargo& cargo) const {
    return cargo.name_ == name_ &&
           cargo.basePrice_ == basePrice_;
}