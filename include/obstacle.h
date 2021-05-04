#pragma warning(disable : 4819)
#pragma once

#include <cinder/Color.h>
#include "utilities.h"

namespace snake {
class Obstacle {
 public:
  /**
   * Default constructor
   */
  Obstacle();

  /**
   * Constructor that takes in a vec2 position as parameter
   */
  Obstacle(glm::vec2 position);

  /**
 * Create a new position for the obstacle
 * Decrement score if snake hits an obstacle
 * @return New position for the obstacle
 */
  glm::vec2 SetNewPosition();

  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  glm::vec2 position_;
  const char* kObstacleColor = "blue";
};
}
