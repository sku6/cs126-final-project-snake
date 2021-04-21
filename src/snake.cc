#include "snake.h"
#include <random>

using glm::vec2;

namespace snake {

Snake::Snake() {
  size_ = 1;
  position_ = vec2(GenerateRandomNumberBetween(101, 699),GenerateRandomNumberBetween(101, 699));
}

Snake::Snake(const vec2& position) {
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

int Snake::GenerateRandomNumberBetween(int lower_bound, int upper_bound) {
std::random_device randomDevice;
std::mt19937 gen(randomDevice());

std::uniform_int_distribution<int> random_bit(lower_bound, upper_bound);
return random_bit(gen);

}
}  // namespace snake
