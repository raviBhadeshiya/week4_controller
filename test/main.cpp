/**
 * @file    main.cpp
 * @author  Ravi Bhadeshiya
 * @version 1.0
 * @copyright GNU Public License
*/
#include <gtest/gtest.h>
/**
 * @brief      Main function for testing
 *
 * @return     return test result
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
