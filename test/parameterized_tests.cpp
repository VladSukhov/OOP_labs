#include <gtest/gtest.h>
#include "func.h"

class func_parameterized_test1 :public ::testing::TestWithParam<pair_of_ints> {};
class func_parameterized_test2 :public ::testing::TestWithParam<pair_of_ints> {};

TEST_P(func_parameterized_test1, valid_argument) 
{
    pair_of_ints p = GetParam();
    EXPECT_THROW(invalid_data(p), std::out_of_range);
}

INSTANTIATE_TEST_SUITE_P(invalid_arg, 
func_parameterized_test1, 
::testing::Values(
    std::make_pair(-1, 4), std::make_pair(0, 5), std::make_pair(3, -2)
));

TEST_P(func_parameterized_test2, valid_argument) 
{
    pair_of_ints p = GetParam();
    int res = func(p);
    int res1 = func_reverse(p);
    EXPECT_EQ(res, res1);
}

INSTANTIATE_TEST_SUITE_P(valid_arg, 
func_parameterized_test2, 
::testing::Values(
    std::make_pair(2, 4), std::make_pair(3, 5), std::make_pair(10, 8)
));