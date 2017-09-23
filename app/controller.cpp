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
// the compute method until 0.0001 threshold of error^2 or 10000 steps

// Initialize Count

// Do while Loop

// Compute the a step in controller

// Update the current state based on output

// DEBUGGING your logic
#ifdef DEBUG_Controller
  std::cout << "Step:" << count << " Current:" << this->getCurrentState()
            << " and Target:" << target << " Error:" << this->error
            << std::endl;
#endif
  // Increment count

  // While condition

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

// get kp
float Controller::getKp() { return this->kp; }

// get kd
float Controller::getKd() { return this->kd; }

// get ki
float Controller::getKi() { return this->ki; }

// Get current state
float Controller::getCurrentState() { return this->currentState; }
