#include "snake.h"
using glm::vec2;

namespace snake {
snake::Snake::Snake(const vec2& position) {
  size_ = 1;
  position_ = position;
}

void Snake::addPart() {
  ++size_;
}

size_t Snake::GetSize() const {
  return size_;
}
ci::Color Snake::GetColor() const {
  return kSnakeColor;
}
glm::vec2 Snake::GetPosition() const {
  return position_;
}
}  // namespace snake
