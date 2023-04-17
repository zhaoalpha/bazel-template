//
// Created by zhao on 23-4-17.
//

#include "../../include/demo/demo.h"
#include <gtest/gtest.h>

TEST(demoTest, sampleTest) {
  auto result = Add(3, 5);
  auto expected = 8;
  EXPECT_EQ(expected, result);
}