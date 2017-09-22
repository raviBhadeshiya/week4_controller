#pragma once

/**
 *  @file    controller.hpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief ENPM 808x, week3, Test-Driven Development exercise (with partner
 * component)
 *
 *  @section DESCRIPTION
 *
 *  This is a little program that compute the PID.
 *
 */

#include <iostream>
/**
 * @brief Class that compute the PID.
 */
class Controller {
 private:
  float kp = 0, ki = 0, kd = 0;  ///< Gain variables as float
  bool isInit = false;           ///< Is init as Boolean

 public:
  // Default constructor
  Controller();
  // Override constructor to set all const
  Controller(float kp, float ki, float kd);
  // Default destructor
  ~Controller();
  // Function to check controller Init
  bool isIntialize();
  // PID compute step
  float computeStep(float target);
  // PID compute till converge
  void compute(float target);
  // Get kp
  float getKp();
  // set kp
  void setKp(float);
  // Get kd
  float getKd();
  // set kd
  void setKd(float);
  // Get ki
  float getKi();
  // set ki
  void setKi(float);
};
