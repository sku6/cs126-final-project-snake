#include "snake.h"
namespace snake {
snake::Snake::Snake() {
  size_ = 1;
}

void Snake::addPart() {
  ++size_;
}

size_t Snake::GetSize() {
  return size_;
}
}

