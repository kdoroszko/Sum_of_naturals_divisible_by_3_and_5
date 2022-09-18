#include "gtest/gtest.h"

#include "sumOfNaturalsDivisibleBy3And5.hpp"

TEST(Sum, Zero)
{
    ASSERT_EQ(0, SumOfNaturalsDivisibleBy3And5(2));
}

TEST(Sum, Three)
{
    ASSERT_EQ(3, SumOfNaturalsDivisibleBy3And5(3));
}
