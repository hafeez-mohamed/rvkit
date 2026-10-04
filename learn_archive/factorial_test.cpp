#include <gtest/gtest.h>
#include "factorial.h"

TEST(Factorial, Negative) { EXPECT_EQ(factorial(-3), 1); }
TEST(Factorial, Zero)     { EXPECT_EQ(factorial(0), 1); }
TEST(Factorial, One)      { EXPECT_EQ(factorial(1), 1); }
TEST(Factorial, Five)     { EXPECT_EQ(factorial(5), 120); }
TEST(Factorial, Twelve)   { EXPECT_EQ(factorial(12), 479001600); }
