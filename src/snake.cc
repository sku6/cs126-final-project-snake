#include "snake.h"

using glm::vec2;

namespace snake {

Snake::Snake() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(102, 698),
                   Utilities::GenerateRandomNumberBetween(102, 698));
}

Snake::Snake(const vec2& position) {
  position_ = position;
}

ci::Color Snake::GetColor() const {
  return kSnakeColor;
}

glm::vec2 Snake::GetPosition() const {
  return position_;
}

void Snake::MoveUp() {
  position_ = vec2(GetPosition().x, GetPosition().y - kMoveIncrement);
}

void Snake::MoveDown() {
  position_ = vec2(GetPosition().x, GetPosition().y + kMoveIncrement);
}

void Snake::MoveLeft() {
  position_ = vec2(GetPosition().x - kMoveIncrement, GetPosition().y);
}

void Snake::MoveRight() {
  position_ = vec2(GetPosition().x + kMoveIncrement, GetPosition().y);
}
}  // namespace snake
