/**
 * @file    main.cpp
 * @author  Ravi Bhadeshiya
 * @version 1.0
 * @copyright GNU Public License
*/
#include <controller.hpp>
#include <iostream>
#include <memory>
/**
 * @brief      Main function
 *
 * @return     return 0
 */
int main() {
  Controller pid(0.01, 0.001, 0.05);
  pid.compute(25);
  std::cout << "Final State:" << pid.getCurrentState() << std::endl;
  return 0;
}
