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

void Snake::MoveUp() {
  position_ = vec2(GetPosition().x, GetPosition().y+1);
}

void Snake::MoveDown() {
  position_ = vec2(GetPosition().x, GetPosition().y-1);
}

void Snake::MoveLeft() {
  position_ = vec2(GetPosition().x-1, GetPosition().y);
}

void Snake::MoveRight() {
  position_ = vec2(GetPosition().x+1, GetPosition().y);
}
}  // namespace snake
