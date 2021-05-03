#pragma warning(disable : 4819)
#pragma once

#include <glm/vec2.hpp>
#include <random>

namespace snake {
class Utilities {
 public:
  /**
 * A helper method that generates a random number between the two given
 * boundaries
 * @param lower_bound The lower bound of the random number generated
 * @param upper_bound The upper bound of the random number generated
 * @return An integer between the boundaries given
 */
  static int GenerateRandomNumberBetween(int lower_bound, int upper_bound);

  /**
   * Return the distance between two points
   * @param point_1 first point
   * @param point_2 second point
   * @return the distance between two points as a float
   */
  static float GetDistance(glm::vec2 point_1, glm::vec2 point_2);
};
}