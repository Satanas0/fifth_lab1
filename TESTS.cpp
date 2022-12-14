//
// Created by FFeolex on 14.12.2022.
//

#include <iostream>
#include "googletest/googletest/include/gtest/gtest.h"
#include "calculus.cpp"

TEST(CalculusTest, Sum_test) {
    ASSERT_EQ(sum(5, 6), 11);
}

TEST(CalculusTest, Minus_test) {
    ASSERT_EQ(minuss(10, 9), 1);
}

TEST(CalculusTest, DIff_test) {
    ASSERT_EQ(diff(7,8), 1);
}

