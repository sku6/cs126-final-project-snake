#pragma warning(disable : 4819)
#pragma once

#include <glm/vec2.hpp>
#include "snake.h"

namespace snake {
class Extension {
 public:
  /**
   * Default constructor
   */
  Extension(const glm::vec2 position);

  glm::vec2 GetPosition() const;
  void SetPosition(const glm::vec2 position);

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

  size_t GetKMoveIncrement() const;

 private:
  glm::vec2 position_;
  size_t kMoveIncrement = 1;
};
}  // namespace snake
