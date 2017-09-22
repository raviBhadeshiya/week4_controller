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
  //  std::shared_ptr<Controller> pid = std::make_shared<Controller>();
  Controller pid;
  std::cout << pid.compute(1.2);
  return 0;
}
