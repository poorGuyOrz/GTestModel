#include <iostream>
#include "gtest/gtest.h"

using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(LogTest, ReadEnd) { //NOLINT
    EXPECT_EQ(3, add(1, 2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
