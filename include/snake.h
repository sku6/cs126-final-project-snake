#pragma warning(disable : 4819)
#pragma once

#include <cinder/Color.h>

#include "extension.h"
#include "utilities.h"

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

  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  const char* kSnakeColor = "green";
  glm::vec2 position_;
  size_t kMoveIncrement = 1;
};
}  // namespace snake
