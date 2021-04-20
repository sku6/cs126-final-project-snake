#pragma warning(disable : 4819)
#pragma once

namespace snake {
class Snake {
 public:
  /**
   * Constructor
   */
  Snake();

  /**
   * Adds a new part to the end of the snake once the snake eats food
   */
  void addPart();
};
}  // namespace snake

