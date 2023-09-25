#include <gtest/gtest.h>
#include "func.h"

TEST(HelloTest, BasicAssertions) 
{
  // arrange 
  pair_of_ints p(2, 3);
  // act
  int res = p.first * p.second - 1;

  // assert
  EXPECT_EQ(res, 5);
}

TEST(HelloTest, BasicAssertions1) 
{
  // arrange 
  pair_of_ints p(-2, 3);
  // act

  // assert
  EXPECT_THROW(invalid_data(p), std::out_of_range);
}
