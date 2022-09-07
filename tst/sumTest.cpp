#include "gtest/gtest.h"

#include "sumOfNaturalsDivisibleBy3And5.hpp"

TEST(Sum, Three)
{
    ASSERT_EQ(3, SumOfNaturalsDivisibleBy3And5(3));
}
