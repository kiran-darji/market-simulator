// 3. Trader / Agent
//
// Represents: A market participant.
//
// Essential Properties:
//
// ID
//
// Cash balance
//
// Holdings (inventory per asset)
//
// Risk limits (optional)
//
// Strategy logic (how they decide orders)
//
// Optional / Extensible:
//
// Multiple strategies per trader
//
// Portfolio constraints across assets
//
// Logging or performance stats
//
// Latency / execution delay simulation
//
// Why: Traders produce orders, but do not touch the order book directly. They are independent, which allows parallel computation.