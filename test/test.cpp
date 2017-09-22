/**
 *  @file    test.cpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief ENPM 808x, week3, Test-Driven Development exercise (with partner
 * component)
 *
 *  @section DESCRIPTION
 *
 *  This is a little program that test the controller class
 *
 */
#include <gtest/gtest.h>
#include <memory>
#include "controller.hpp"

TEST(classTest, initTest1) {
  Controller pid;
  EXPECT_TRUE(pid.isIntialize());
}

TEST(classTest, initTest2) {
  Controller pid(1.1, 1.2, 1.3);
  EXPECT_NEAR(pid.getKp(), 1.1, 0.000001);
  EXPECT_NEAR(pid.getKi(), 1.2, 0.000001);
  EXPECT_NEAR(pid.getKd(), 1.3, 0.000001);
}

TEST(classTest, compute1) {
  Controller pid(1.1, 1.2, 1.3);
  EXPECT_TRUE(pid.isIntialize());
  EXPECT_NEAR(pid.compute(1.2), 0, 0.001);
}
