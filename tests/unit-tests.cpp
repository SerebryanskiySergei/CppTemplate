#include <gtest/gtest.h>
#include <modern/lib.hpp>

TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(ModernFact::Factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(ModernFact::Factorial(1), 1);
  EXPECT_EQ(ModernFact::Factorial(2), 2);
  EXPECT_EQ(ModernFact::Factorial(3), 6);
  EXPECT_EQ(ModernFact::Factorial(8), 40320);
}