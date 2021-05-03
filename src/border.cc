#include "border.h"
using glm::vec2;

namespace snake {
snake::Border::Border(const glm::vec2& top_left_corner,
                        const glm::vec2& bottom_right_corner, Snake snake) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
  score_ = 0;
  snake_ = snake;
}

void Border::Display() {
  // Display score
  ci::gl::drawStringCentered(
      kScoreText + std::to_string(score_),
      glm::vec2((container_top_left_corner_.x + container_bottom_right_corner_.x) / 2,
                container_top_left_corner_.y - kMargin),
      kTextColor, ci::Font("", 50.0f));

  // Draw the container
  ci::gl::color(ci::Color(kContainerColor));
  ci::gl::drawStrokedRect(
      ci::Rectf(container_top_left_corner_, container_bottom_right_corner_));

  // Draw snake
  ci::gl::color(ci::Color(snake_.GetColor()));
  ci::gl::drawSolidCircle(snake_.GetPosition(), snake_width_);

  // Draw Treats
  ci::gl::color(ci::Color(treat_.GetColor()));
  ci::gl::drawSolidCircle(treat_.GetPosition(), treat_radius_);

  // Turn the treat to background color after being eaten
  if (HasSnakeEatenTreat()) {
    ++score_;
    ci::gl::color(ci::Color(treat_.GetColor()));
    ci::gl::drawSolidCircle(treat_.SetNewPosition(), treat_radius_);
  }

  // Draw extensions
  for (auto & extension : extensions) {
    ci::gl::color(ci::Color("blue"));
    ci::gl::drawSolidCircle(extension.GetPosition(), snake_width_);
  }

  if (is_game_over_) {
    // Display Game over text
    ci::gl::drawStringCentered(
        kGameOverText,
        glm::vec2((container_top_left_corner_.x + container_bottom_right_corner_.x) / 2,
                  (container_top_left_corner_.y + container_bottom_right_corner_.y) / 2),
        kTextColor, ci::Font("", 50.0f));
  }
}

void Border::AdvanceOneFrame() {
  IsGameOver();
  if (is_game_over_) {
    return;
  }

  if (HasSnakeEatenTreat()) {
    if(snake_direction_ == Direction::kUp) {
      extensions.emplace_back(Extension(vec2(snake_.GetPosition().x, snake_.GetPosition().y-snake_.GetKMoveIncrement())));
    } else if (snake_direction_ == Direction::kDown) {
      extensions.emplace_back(Extension(vec2(snake_.GetPosition().x, snake_.GetPosition().y+snake_.GetKMoveIncrement())));
    } else if (snake_direction_ == Direction::kLeft) {
      extensions.emplace_back(Extension(vec2(snake_.GetPosition().x-snake_.GetKMoveIncrement(), snake_.GetPosition().y)));
    } else {
      extensions.emplace_back(Extension(vec2(snake_.GetPosition().x+snake_.GetKMoveIncrement(), snake_.GetPosition().y)));
    }
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

bool Border::HasSnakeEatenTreat() {
  if (Utilities::GetDistance(snake_.GetPosition(), treat_.GetPosition()) <= kGameFlexibilityConstant) {
    return true;
  }
  return false;
}

bool Border::IsGameOver() {
  if (HasSnakeColliedWithWall()) {
    is_game_over_ = true;
  }
  return is_game_over_;
}
}  // namespace snake
