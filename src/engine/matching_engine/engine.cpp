// 5. Matching Engine
//
// Represents: The rules for turning orders into trades.
//
// Core Responsibilities:
//
// Consume orders from the asset queue (single-threaded per asset)
//
// Apply price-time priority rules:
//
// Best price first
//
// FIFO for same price
//
// Generate trades (price, quantity)
//
// Update order book (remove/partially fill orders)
//
// Update trader balances and inventory
//
// Optional / Extensible:
//
// Auction matching for open/close
//
// Special order types (FOK, IOC)
//
// Logging / trade history
//
// Event hooks for analytics or market signals
//
// Why: This is the deterministic core of the market, everything else interacts with it indirectly.