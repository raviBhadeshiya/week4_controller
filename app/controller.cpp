/*
 * @file      controller.cpp
 *
 * @author    Ravi Bhadeshiya
 * @copyright GNU Public License
 */
#include <controller.hpp>
/**
 * @brief      Constructs the object
 */
Controller::Controller() { this->isInit = true; }
/**
 * @brief      Constructs the override object to set all gains
 */
Controller::Controller(float kp, float ki, float kd) {
  this->isInit = true;
  this->kp = kp;
  this->ki = ki;
  this->kd = kd;
}
/**
 * @brief      Destroys the object
 */
Controller::~Controller() { this->isInit = false; }
/**
 * @brief      Method is to check pid initialized or not
 * @return     isInit as boolean
*/
bool Controller::isIntialize() { return this->isInit; }
/**
 * @brief      Method is to compute pid logics
 * @return     output as float
*/
float Controller::compute(float target) {
  // TODO(MichiMaestre): compute the pid contoller here
  return 0.0 * target;
}
/**
 * @brief      Method to get proportional gain
 * @return     proportional gain as float
*/
float Controller::getKp() { return this->kp; }
/**
 * @brief      Method to set proportional gain
 * @return     none
*/
void Controller::setKp(float kp) { this->kp = kp; }
/**
 * @brief      Method to get derivative gain
 * @return     derivative gain as float
*/
float Controller::getKd() { return this->kd; }
/**
 * @brief      Method to set derivative gain
 * @return     none
*/
void Controller::setKd(float kd) { this->kd = kd; }
/**
 * @brief      Method to get integral gain
 * @return     integral gain as float
*/
float Controller::getKi() { return this->ki; }
/**
 * @brief      Method to set integral gain
 * @return     none
*/
void Controller::setKi(float ki) { this->ki = ki; }
