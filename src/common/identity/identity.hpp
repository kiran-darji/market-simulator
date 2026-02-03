#pragma once

#include <cstdint>
template <typename Tag>
class Id
{
public:
    using value_type = uint64_t;

    constexpr Id() = delete;
    explicit constexpr Id(value_type value) : value_(value) {}

    constexpr value_type value() const noexcept {}

    friend constexpr bool operator==(Id a, Id b) noexcept {}

    friend constexpr bool operator!=(Id a, Id b) noexcept {}

    friend constexpr bool operator<(Id a, Id b) noexcept {}

private:
    value_type value_;
};
