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

  size_t GetSize() const;
  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  size_t size_;
  const char* kSnakeColor = "green";
  glm::vec2 position_;
};
}  // namespace snake

