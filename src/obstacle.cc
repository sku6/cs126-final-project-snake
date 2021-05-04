#include "obstacle.h"
using glm::vec2;
namespace snake {

snake::Obstacle::Obstacle() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101 + KObstacleSideLength, 699 - KObstacleSideLength),
                   Utilities::GenerateRandomNumberBetween(101 + KObstacleSideLength, 699 - KObstacleSideLength));
}

Obstacle::Obstacle(glm::vec2 position) {
  position_ = position;
}

glm::vec2 Obstacle::SetNewPosition() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101 + KObstacleSideLength, 699 - KObstacleSideLength),
                   Utilities::GenerateRandomNumberBetween(101 + KObstacleSideLength, 699 - KObstacleSideLength));
  return position_;
}

ci::Color Obstacle::GetColor() const {
  return kObstacleColor;
}

glm::vec2 Obstacle::GetPosition() const {
  return position_;
}
}
