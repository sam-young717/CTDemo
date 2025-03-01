#include <gtest/gtest.h>
#include "goo.h"

// 
TEST(GooTest, TestGetValueWithZero) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-ZERO");
 
  EXPECT_EQ(getValue(0, 0), 0);
}

// 
TEST(GooTest, TestGetValueWithPositive) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-POSITIVE");

  EXPECT_EQ(getValue(5, 5), 25);
}

TEST(GooTest, TestGetValueWithNegative) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-NEGATIVE");

  EXPECT_EQ(getValue(-5, -5), -5);
}