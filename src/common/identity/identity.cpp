#include "identity.hpp"

template <typename Tag>
class Id
{
public:
    using value_type = uint64_t;

    constexpr Id() = delete;
    explicit constexpr Id(value_type value) : value_(value) {}

    constexpr value_type value() const noexcept
    {
        return value_;
    }

    friend constexpr bool operator==(Id a, Id b) noexcept
    {
        return a.value_ == b.value_;
    }

    friend constexpr bool operator!=(Id a, Id b) noexcept
    {
        return !(a == b);
    }

    friend constexpr bool operator<(Id a, Id b) noexcept
    {
        return a.value_ < b.value_;
    }

private:
    value_type value_;
};