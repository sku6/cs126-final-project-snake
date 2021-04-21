#include "boarder.h"
using glm::vec2;

namespace snake {
snake::Boarder::Boarder(const glm::vec2& top_left_corner,
                        const glm::vec2& bottom_right_corner) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
}

void Boarder::Display() const {
  // Draw the container
  ci::gl::color(ci::Color(kContainerColor));
  ci::gl::drawStrokedRect(
      ci::Rectf(container_top_left_corner_, container_bottom_right_corner_));

  // Draw snake
  ci::gl::color(ci::Color(snake_.GetColor()));
  ci::gl::drawSolidCircle(snake_.GetPosition(), snake_width_);
}

void Boarder::AdvanceOneFrame() {

}

Snake Boarder::GetSnake() {
  return snake_;
}

//Boarder::Boarder(const Boarder (*)(const glm::vec2&, const glm::vec2&)) : container_bottom_right_corner_(bottom_right_corner),
//container_top_left_corner_(top_left_corner), snake_(CreateSnake){
//  container_top_left_corner_ = top_left_corner;
//  container_bottom_right_corner_ = bottom_right_corner;
//  snake_ = Snake(vec2(GenerateRandomNumberBetween(101, 699),
//                      GenerateRandomNumberBetween(101, 699)));
//}
}  // namespace snake
