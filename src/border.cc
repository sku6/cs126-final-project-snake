#include "border.h"
using glm::vec2;

namespace snake {
Border::Border(const vec2& top_left_corner, const vec2& bottom_right_corner) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
  score_ = 0;
  for (size_t i = 0; i < kNumberOfObstacles; ++i) {
    obstacles_.emplace_back();
  }
}

snake::Border::Border(const glm::vec2& top_left_corner,
                      const glm::vec2& bottom_right_corner, Snake snake) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
  score_ = 0;
  snake_ = snake;
}

Border::Border(const vec2& top_left_corner, const vec2& bottom_right_corner,
               Snake snake, Treat treat) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
  score_ = 0;
  snake_ = snake;
  treat_ = treat;
}

Border::Border(const vec2& top_left_corner, const vec2& bottom_right_corner,
               Snake snake, Obstacle obstacle) {
  container_top_left_corner_ = top_left_corner;
  container_bottom_right_corner_ = bottom_right_corner;
  score_ = 0;
  snake_ = snake;
  obstacles_.push_back(obstacle);
}

void Border::Display() const {
  // Display score
  ci::gl::drawStringCentered(
      kScoreText + std::to_string(score_),
      glm::vec2(
          (container_top_left_corner_.x + container_bottom_right_corner_.x) / 2,
          container_top_left_corner_.y - kMargin),
      kTextColor, ci::Font("", 50.0f));

  // Display the container
  ci::gl::color(ci::Color(kContainerColor));
  ci::gl::drawStrokedRect(
      ci::Rectf(container_top_left_corner_, container_bottom_right_corner_));

  // Display snake
  ci::gl::color(ci::Color(snake_.GetColor()));
  ci::gl::drawSolidCircle(snake_.GetPosition(), snake_width_);

  // Display Treats
  ci::gl::color(ci::Color(treat_.GetColor()));
  ci::gl::drawSolidCircle(treat_.GetPosition(), treat_radius_);

  // Display Obstacles
  for (auto& obstacle : obstacles_) {
    ci::gl::color(ci::Color(obstacle.GetColor()));
    ci::gl::drawSolidRect(
        ci::Rectf(obstacle.GetPosition(),
                  vec2(obstacle.GetPosition().x + KObstacleSideLength,
                       obstacle.GetPosition().y + KObstacleSideLength)));
  }

  // Draw extensions_
  for (const auto& extension : extensions_) {
    ci::gl::color(ci::Color(snake_.GetColor()));
    ci::gl::drawSolidCircle(extension.GetPosition(), snake_width_);
  }

  if (is_game_over_) {
    // Display Game over text
    ci::gl::drawStringCentered(
        kGameOverText,
        glm::vec2(
            (container_top_left_corner_.x + container_bottom_right_corner_.x) /
                2,
            (container_top_left_corner_.y + container_bottom_right_corner_.y) /
                2),
        kTextColor, ci::Font("", 50.0f));
  }
}

void Border::AdvanceOneFrame() {
  IsGameOver();
  if (is_game_over_) {
    return;
  }

  if (HasSnakeHitObstacle()) {
    --score_;
    for (auto& obstacle : obstacles_) {
      obstacle.SetNewPosition();
    }
  }

  if (HasSnakeEatenTreat()) {
    ++score_;
    treat_.SetNewPosition();
    if (snake_direction_ == Direction::kUp) {
      // vector<Type>.push_back(Type(x, y)) == vector<Type>.emplace_back(x, y)
      extensions_.emplace_back(
          vec2(snake_.GetPosition().x, snake_.GetPosition().y + kSegmentDistance));
    } else if (snake_direction_ == Direction::kDown) {
      extensions_.emplace_back(
          vec2(snake_.GetPosition().x, snake_.GetPosition().y - kSegmentDistance));
    } else if (snake_direction_ == Direction::kLeft) {
      extensions_.emplace_back(
          vec2(snake_.GetPosition().x + kSegmentDistance, snake_.GetPosition().y));
    } else {
      extensions_.emplace_back(
          vec2(snake_.GetPosition().x - kSegmentDistance, snake_.GetPosition().y));
    }
  }

  // If player press on the keyboard direction keys snake and extension segments move in that direction
  if (snake_direction_ == Direction::kUp) {
    snake_current_location = snake_.GetPosition();
    snake_.MoveUp();
  } else if (snake_direction_ == Direction::kDown) {
    snake_current_location = snake_.GetPosition();
    snake_.MoveDown();
  } else if (snake_direction_ == Direction::kLeft) {
    snake_current_location = snake_.GetPosition();
    snake_.MoveLeft();
  } else {
    snake_current_location = snake_.GetPosition();
    snake_.MoveRight();
  }
  for (auto & extension : extensions_) {
    vec2 temp = extension.GetPosition();
    extension.SetPosition(snake_current_location);
    snake_current_location = temp;
    }
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
  } else if (snake_.GetPosition().y <= container_top_left_corner_.y) {
    // check if it hits the top wall
    return true;
  }
  return false;
}

bool Border::HasSnakeEatenTreat() {
  return Utilities::GetDistance(snake_.GetPosition(), treat_.GetPosition()) <=
         kGameFlexibilityConstant;
}

bool Border::HasSnakeHitObstacle() const {
  for (const auto& obstacle : obstacles_) {
    if (Utilities::GetDistance(
            snake_.GetPosition(),
            vec2(obstacle.GetPosition().x + KObstacleSideLength / 2,
                 obstacle.GetPosition().y + KObstacleSideLength / 2)) <=
        kGameFlexibilityConstant * 4) {
      return true;
    }
    for (auto & extension : extensions_) {
      if (Utilities::GetDistance(
          extension.GetPosition(),
          vec2(obstacle.GetPosition().x + KObstacleSideLength / 2,
               obstacle.GetPosition().y + KObstacleSideLength / 2)) <=
          kGameFlexibilityConstant * 4) {
        return true;
      }
    }
  }
  return false;
}

bool Border::HasSnakeHitItself() {
  for (auto & extension : extensions_) {
    if (Utilities::GetDistance(extension.GetPosition(), snake_.GetPosition()) <= 1) {
      return true;
    }
  }
  return true;
}

bool Border::IsGameOver() {
  if (HasSnakeColliedWithWall()) {
    is_game_over_ = true;
  } else if (score_ < 0) {
    is_game_over_ = true;
  }
  return is_game_over_;
}

Snake& Border::GetSnake() {
  return snake_;
}

size_t Border::GetScore() {
  return score_;
}
}  // namespace snake
