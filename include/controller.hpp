#pragma once
/**
 *  @file    controller.hpp
 *  @author  Ravi Bhadeshiya
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief Test-Driven Development exercise (with partner component)
 *
 *
 *  @section DESCRIPTION
 *
 *  This is a little program that compute the PID.
 *
 */

// #define DEBUG_Controller // uncomment the for debugging

#include <iostream>
/**
 * @brief Class that compute the PID.
 */
class Controller {
 private:
  const float DTIME = 0.1;       ///< Constant delta time as float
  const float MXVALUE = 10;      ///< Constant max output as float
  float pError = 0;              ///< Previous error as float
  float totalError = 0;          ///< Total error as float
  float error = 0;               ///< Error as float
  float currentState = 0;        ///< Current state as float
  float kp = 0, ki = 0, kd = 0;  ///< Gain variables as float
  bool isInit = false;           ///< Is initialize as boolean

 public:
  /**
   * @brief      Constructs the object
   */
  Controller();
  /**
   * @brief      Constructs the override object to set all gains
   * @param      kp  The proportional gain as float
   * @param      ki  The integral gain as float
   * @param      kd  The derivative gain as float
   */
  Controller(float kp, float ki, float kd);
  /**
   * @brief      Destroys the object
   */
  ~Controller();
  /**
   * @brief      Method for check PID initialized or not
   * @return     isInit as boolean
   */
  bool isIntialize();
  /**
   * @brief      Method that compute PID logics
   * @param      Target  The target state as float
   * @return     output command as float
   */
  float computeStep(float target);
  /**
   * @brief      Method for computing multiple step PID
   * @param      Target  The target state as float
   * @return     none
   */
  void compute(float target);
  /**
   * @brief      Method for limiting the output
   * @param      output The output signal as float
   * @return     output as float
   */
  float scalled(float output);
  /**
   * @brief      Method to get proportional gain
   * @return     proportional gain as float
   */
  float getKp();
  /**
   * @brief      Method to set proportional gain
   * @param      kp  The proportional gain as float
   * @return     none
   */
  void setKp(float kp);
  /**
   * @brief      Method to get derivative gain
   * @return     derivative gain as float
   */
  float getKd();
  /**
   * @brief      Method to set derivative gain
   * @param      kd  The derivative gain as float
   * @return     none
   */
  void setKd(float kd);
  /**
   * @brief      Method to get integral gain
   * @return     integral gain as float
   */
  float getKi();
  /**
   * @brief      Method to set integral gain
   * @param      ki  The integral gain as float
   * @return     none
   */
  void setKi(float ki);
  /**
   * @brief      Method to get current state
   * @return     current state as float
   */
  float getCurrentState();
  /**
   * @brief      Method to set current state
   * @param      ki  The integral gain as float
   * @return     none
   */
  void setCurrentState(float state);
};
