#pragma once // prevents multiple inclusions

#include <string>
#include <stdexcept>

class Asset
{
private:
    const std::string name;
    const int lot_size;
    const float tick_size;

public:
    // Constructor
    Asset(const std::string &name, int lot_size, float tick_size);

    // Destructor
    ~Asset() = default;

    // Copy constructor
    Asset(const Asset &other) = default;

    // Getters
    const std::string &get_name() const;
    int get_lot_size() const;
    float get_tick_size() const;
};
