#include <gtest/gtest.h>
#include "../include/validator.h"

TEST(test1_basic, basic_test_set) {
    ASSERT_TRUE(isvalid("()"));
    ASSERT_FALSE(isvalid(")(()))"));
    ASSERT_FALSE(isvalid("("));
    ASSERT_TRUE(isvalid("(())((()())())"));
}

TEST(test2_edge, basic_test_set) {
    ASSERT_TRUE(isvalid(""));
    ASSERT_FALSE(isvalid(")"));
    ASSERT_FALSE(isvalid("("));
    ASSERT_TRUE(isvalid("()()()"));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}