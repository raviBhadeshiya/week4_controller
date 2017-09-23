/**
 *  @file    test.cpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief est-Driven Development exercise (with partner component)
 *
 *  @section DESCRIPTION
 *
 *  This is a little program that test the controller class
 *
 */
#include <gtest/gtest.h>
#include <memory>
#include "controller.hpp"

std::shared_ptr<Controller>
    PID_Controller;  ///< Shared pointer for PID_controller as controller

/**
 * @brief Class initialization test
 */
TEST(classTest, initTest1) {
  PID_Controller = std::make_shared<Controller>();

  EXPECT_TRUE(PID_Controller->isIntialize());
}

/**
 * @brief Class's get and set function test
 */
TEST(classTest, initTest2) {
  PID_Controller = std::make_shared<Controller>(1.1, 1.2, 1.3);

  EXPECT_NEAR(PID_Controller->getKp(), 1.1, 0.000001);
  EXPECT_NEAR(PID_Controller->getKi(), 1.2, 0.000001);
  EXPECT_NEAR(PID_Controller->getKd(), 1.3, 0.000001);
}

/**
 * @brief Test the step logic
 */
TEST(classTest, compute_step) {
  PID_Controller = std::make_shared<Controller>(0.01, 0.001, 0.05);

  PID_Controller->setCurrentState(1);

  EXPECT_NEAR(PID_Controller->computeStep(1.2), 0.10202, 0.000001);
}

/**
 * @brief Test the convergence of logic
 */
TEST(classTest, compute_convergence) {
  PID_Controller = std::make_shared<Controller>(0.01, 0.001, 0.05);

  PID_Controller->compute(50.0);
  //  EXPECT_FLOAT_EQ(pid->getCurrentState(), 49.9539);

  EXPECT_NEAR(PID_Controller->getCurrentState(), 49.9539, 0.00001);
}
