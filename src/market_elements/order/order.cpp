#include <cstdint>

class Order
{
private:
    uint64_t order_id;
    uint64_t trader_id;
};

// 2. Order
//
// Represents: A trader’s intent to buy or sell.
//
// Essential Properties:
//
// Trader ID (who submitted it)
//
// Asset
//
// Side (buy / sell)
//
// Quantity
//
// Price (or market order flag)
//
// Time or sequence ID
//
// Status (pending, partially filled, filled, canceled)
//
// Optional / Extensible:
//
// Order type (IOC, FOK, stop, trailing stop)
//
// Time-to-live or expiration
//
// Hidden / iceberg flags
//
// Priority or special rules
//
// Why: Orders are the primary event that drives the market. Everything else flows from them.