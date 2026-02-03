// 4. Order Book
//
// Represents: The current state of unmatched orders for a single asset.
//
// Essential Properties:
//
// Buy side (bids), sorted by price descending
//
// Sell side (asks), sorted by price ascending
//
// Last traded price
//
// Spread (best bid vs best ask)
//
// Order queue (FIFO for same price)
//
// Optional / Extensible:
//
// Volume per price level
//
// Depth snapshot for analytics
//
// Historical order book (for backtesting)
//
// Hidden / dark orders
//
// Why: This is the single source of truth for the market state of an asset.