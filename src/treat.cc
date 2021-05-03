#include "treat.h"
using glm::vec2;

namespace snake {

Treat::Treat() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101, 699),Utilities::GenerateRandomNumberBetween(101, 699));
}
ci::Color Treat::GetColor() const {
  return kTreatColor;
}
glm::vec2 Treat::GetPosition() const {
  return position_;
}
void Treat::SetColor(char* color) {
  kTreatColor = color;
}
glm::vec2 Treat::SetNewPosition() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101, 699),Utilities::GenerateRandomNumberBetween(101, 699));
  return position_;
}

}
