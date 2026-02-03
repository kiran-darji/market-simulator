// 6. Market / Exchange Layer
//
// Represents: Container and orchestrator for all assets.
//
// Responsibilities:
//
// Maintain list of assets and their order books
//
// Maintain global state (time, trade history)
//
// Provide interfaces for traders to submit orders
//
// Optionally handle multiple threads or event dispatch
//
// Optional / Extensible:
//
// Market-wide metrics (VIX, aggregate volume)
//
// Cross-asset constraints
//
// Fees, taxes, slippage models
//
// Latency modeling
//
// Why: Acts as the central manager and allows adding features without touching core matching logic.