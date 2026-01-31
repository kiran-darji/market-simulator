#include "asset.hpp"

class Asset
{
    const std::string name;
    const int lot_size;
    const float tick_size;

    Asset(
        const std::string &name,
        const int lot_size,
        const float tick_size) : name(name), lot_size(lot_size), tick_size(tick_size)
    {
        if (lot_size <= 0 || tick_size <= 0)
        {
            throw std::invalid_argument("Error, invalid argument");
        }
    }

    const std::string &get_name() const { return name; }

    int get_lot_size() { return lot_size; }

    float get_tick_size() { return tick_size; }
};