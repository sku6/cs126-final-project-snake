#pragma warning(disable : 4819)
#pragma once

#include <cinder/Color.h>

namespace snake {
class Snake {
 public:
  /**
   * Constructor that takes in the position as a parameter
   */
  Snake(const glm::vec2& position);

  /**
   * Default constructor
   */
  Snake();

  /**
   * Adds a new part to the end of the snake once the snake eats food
   */
  void addPart();

  /**
   * Make the snake move upwards
   */
  void MoveUp();

  /**
   * Make the snake move downwards
   */
  void MoveDown();

  /**
   * Make the snake move to the left
   */
  void MoveLeft();

  /**
   * Make the snake move to the right
   */
  void MoveRight();

  /**
 * A helper method that generates a random number between the two given
 * boundaries
 * @param lower_bound The lower bound of the random number generated
 * @param upper_bound The upper bound of the random number generated
 * @return An integer between the boundaries given
 */
  int GenerateRandomNumberBetween(int lower_bound, int upper_bound);

  size_t GetSize() const;
  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  size_t size_;
  const char* kSnakeColor = "green";
  glm::vec2 position_;
};
}  // namespace snake

