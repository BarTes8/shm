#pragma once

#include <string>

class Ship {
public:
    Ship()
        : id_(1)
    {}
    Ship(size_t id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity)
        : id_(id)
        , name_(name)
        , speed_(speed)
        , crew_(0)
        , maxCrew_(maxCrew)
        , capacity_(capacity)
    {}
    Ship(size_t id, size_t speed, size_t maxCrew) 
        : Ship(id, "", speed, maxCrew, 0)
    {}

    void setName(const std::string& name) { name_ = name; }

    Ship& operator+=(const size_t crew);
    Ship& operator-=(const size_t crew);
    
    size_t getId() const        { return id_; }
    std::string getName() const { return name_; }
    size_t getSpeed() const     { return speed_; }
    size_t getCrew() const      { return crew_; }
    size_t getMaxCrew() const   { return maxCrew_; }
    size_t getCapacity() const  { return capacity_; }

private:
    const size_t id_;
    std::string name_;
    size_t speed_;
    size_t crew_;
    size_t maxCrew_;
    size_t capacity_;
};