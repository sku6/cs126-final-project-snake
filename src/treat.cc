#include "treat.h"
using glm::vec2;

namespace snake {

Treat::Treat() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101, 699),Utilities::GenerateRandomNumberBetween(101, 699));
}

Treat::Treat(glm::vec2 position) {
  position_ = position;
}

ci::Color Treat::GetColor() const {
  return kTreatColor;
}

glm::vec2 Treat::GetPosition() const {
  return position_;
}

glm::vec2 Treat::SetNewPosition() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101, 699),Utilities::GenerateRandomNumberBetween(101, 699));
  return position_;
}
}
