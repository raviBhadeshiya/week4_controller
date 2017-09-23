/**
 * @file    controller.cpp
 * @author  Ravi Bhadeshiya
 * @version 1.0
 * @copyright GNU Public License
*/
#include <controller.hpp>

// Default constructor
Controller::Controller() { this->isInit = true; }

// Override constructor to set all const
Controller::Controller(float kp, float ki, float kd) {
  this->isInit = true;
  this->setKp(kp);
  this->setKi(ki);
  this->setKd(kd);
}

// Default destructor
Controller::~Controller() { this->isInit = false; }

// Function to check controller Init
bool Controller::isIntialize() { return this->isInit; }

// PID compute step
float Controller::computeStep(float target) {
  // TODO(MichiMaestre): compute the PID Controller logic here

  float output = target;
  // Compute the error target - currentstate

  // Update the total error

  // Compute the propostinal_term

  // Compute the integral_term with DTIME

  // Compute the derivative_term with DTIME

  // Update the previous error

  // calculate the output=p+i+d

  return scalled(output);
}

// PID compute till converge
void Controller::compute(float target) {
  // TODO(MichiMaestre): This compute method only update the state and called
  // the
  // compute method until 0.0001 error^2 threshold or 10000 steps

  // Initialize Count

  // Do while Loop

  // Compute the a step for controller

  // Update the current state based on output
  this->currentState = target - 1;
// DEBUGGING your logic toggle a comment, DEBUG_Controller, in controller.hpp
#ifdef DEBUG_Controller
  std::cout << "Step:" << count << " Current:" << this->currentState
            << " and Target:" << target << " Error:" << this->error
            << std::endl;
#endif
  // Increment count

  // While condition if this->error * this->error > 0.0001 and count < 10000
}

// Clipping the overshoot output
float Controller::scalled(float output) {
  output = output < MXVALUE ? output : MXVALUE;
  output = output > -1 * MXVALUE ? output : -1 * MXVALUE;
  return output;
}
// set kp
void Controller::setKp(float kp) { this->kp = kp; }

// set kp
void Controller::setKd(float kd) { this->kd = kd; }

// set ki
void Controller::setKi(float ki) { this->ki = ki; }

// set current state
void Controller::setCurrentState(float state) { this->currentState = state; }

// TODO(MichiMaestre): Return the each correct variable's values
// get kp
float Controller::getKp() { return 0; }

// get kd
float Controller::getKd() { return 0; }

// get ki
float Controller::getKi() { return 0; }

// Get current state
float Controller::getCurrentState() { return 0; }
