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

TEST(Sum, Five)
{
    ASSERT_EQ(8, SumOfNaturalsDivisibleBy3And5(5));
}

TEST(Sum, Fifteen)
{
    ASSERT_EQ(60, SumOfNaturalsDivisibleBy3And5(15));
}
