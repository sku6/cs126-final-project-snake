#include "border.h"
using glm::vec2;

namespace snake {
snake::Border::Border(const glm::vec2& top_left_corner,
                        const glm::vec2& bottom_right_corner) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
}

void Border::Display() const {
  // Draw the container
  ci::gl::color(ci::Color(kContainerColor));
  ci::gl::drawStrokedRect(
      ci::Rectf(container_top_left_corner_, container_bottom_right_corner_));

  // Draw snake
  ci::gl::color(ci::Color(snake_.GetColor()));
  ci::gl::drawSolidCircle(snake_.GetPosition(), snake_width_);
}

void Border::AdvanceOneFrame() {
  if (HasSnakeColliedWithWall()) {
    return;
  }
  if(snake_direction_ == Direction::kUp) {
    snake_.SetPosition(vec2(snake_.GetPosition().x, snake_.GetPosition().y-snake_.GetKMoveIncrement()));
  } else if (snake_direction_ == Direction::kDown) {
    snake_.SetPosition(vec2(snake_.GetPosition().x, snake_.GetPosition().y+snake_.GetKMoveIncrement()));
  } else if (snake_direction_ == Direction::kLeft) {
    snake_.SetPosition(vec2(snake_.GetPosition().x - snake_.GetKMoveIncrement(), snake_.GetPosition().y));
  } else {
    snake_.SetPosition(vec2(snake_.GetPosition().x + snake_.GetKMoveIncrement(), snake_.GetPosition().y));
  }

}

Snake& Border::GetSnake(){
  return snake_;
}

void Border::SetDirection(Direction direction) {
  snake_direction_ = direction;
}
bool Border::HasSnakeColliedWithWall() {
  if (snake_.GetPosition().x <= container_top_left_corner_.x) {
    // check if it hits the left wall
    return true;
  } else if (snake_.GetPosition().x >= container_bottom_right_corner_.x) {
    // check if it hits the right wall
    return true;
  } else if (snake_.GetPosition().y >= container_bottom_right_corner_.y) {
    // check if it hits the bottom wall
    return true;
  } else if(snake_.GetPosition().y <= container_top_left_corner_.y) {
    // check if it hits the top wall
    return true;
  }
  return false;
}
}  // namespace snake
