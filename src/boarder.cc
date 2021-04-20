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
}

void Boarder::AdvanceOneFrame() {

}
}  // namespace snake
