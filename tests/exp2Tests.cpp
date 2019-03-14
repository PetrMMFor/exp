#include <gtest/gtest.h>
#include <exp2.h>


class exp2_test_less_0 : public ::testing::Test {
public:
    Cexp2 exp_0_01;
};

TEST_F(exp2_test_less_0, form_head_test) {
    auto x = -4.99;
    EXPECT_NEAR(std::exp(-x * x), exp_0_01(x),0.00000000000001);
}

TEST_F(exp2_test_less_0, form_tail_test) {
    auto x = -0.01;
    EXPECT_NEAR(std::exp(-x * x), exp_0_01(x),0.00000000000001);
}

TEST_F(exp2_test_less_0, form_body_test) {
    auto x = -2.49;
    EXPECT_NEAR(std::exp(-x * x), exp_0_01(x),0.00000000000001);
}

TEST_F(exp2_test_less_0, zero_test) {
    auto x = 0.0;
    EXPECT_NEAR(std::exp(-x * x), exp_0_01(x),0.00000000000001);
}

TEST_F(exp2_test_less_0, negative_test) {
    auto x = -6.0;
    EXPECT_EQ(0, exp_0_01(x));
}

TEST_F(exp2_test_less_0, max_test) {
    auto x = 5.0;
    EXPECT_EQ(1, exp_0_01(x));
}

TEST_F(exp2_test_less_0, greater_than_the_max_test) {
    auto x = 6.0;
    EXPECT_EQ(1, exp_0_01(x));
}
