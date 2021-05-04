#pragma warning(disable : 4819)
#pragma once

#include "cinder/gl/gl.h"
#include "direction.h"
#include "extension.h"
#include "obstacle.h"
#include "snake.h"
#include "treat.h"

namespace snake {
class Border {
 public:
  /**
   * Using the top left corner and the bottom right corner to create a box for
   * the snake game
   */
  Border(const glm::vec2& top_left_corner,
         const glm::vec2& bottom_right_corner);

  /**
   * Using the top left corner and the bottom right corner to create a box for
   * the snake game, taking in a snake as a parameter
   */
  Border(const glm::vec2& top_left_corner, const glm::vec2& bottom_right_corner,
         Snake snake);

  /**
   * Using the top left corner and the bottom right corner to create a box for
   * the snake game, taking in a snake and a treat as a parameter
   */
  Border(const glm::vec2& top_left_corner, const glm::vec2& bottom_right_corner,
         Snake snake, Treat treat);

  /**
   * Using the top left corner and the bottom right corner to create a box for
   * the snake game, taking in a snake and an obstacle as a parameter
   */
  Border(const glm::vec2& top_left_corner, const glm::vec2& bottom_right_corner,
         Snake snake, Obstacle obstacle);

  /**
   * Displays the container walls and the current positions of the particles.
   */
  void Display() const;

  /**
   * Updates the positions and velocities of all particles (based on the rules
   * described in the assignment documentation).
   */
  void AdvanceOneFrame();

  /**
   * Make sure snake does not collied into the wall
   * Game over if the snake does
   */
  bool HasSnakeColliedWithWall();

  /**
   * Check if the snake has eaten a treat, the treat should disappear after
   * being eaten Score should increment by 1
   */
  bool HasSnakeEatenTreat();

  /**
   * Check if the snake has hit a obstacle, the obstacle should disappear after
   * being hit Score should decrement by 1
   */
  bool HasSnakeHitObstacle() const;

  /**
   * Update the variable is_game_over_
   */
  bool IsGameOver();

  void SetDirection(Direction direction);

  Snake& GetSnake();
  size_t GetScore();

 private:
  // Determine how precise do we want the game to be
  // In other words, how close do we need the snake to be with the treat in
  // order to eat it
  const float kGameFlexibilityConstant = 8.0f;

  // Create container
  const char* kContainerColor = "white";
  glm::vec2 container_bottom_right_corner_;
  glm::vec2 container_top_left_corner_;

  // Create Snake
  Snake snake_;  // This calls default constructor
  const float snake_width_ = 10.0f;

  // Create extensions_
  std::vector<Extension> extensions_;

  // Direction of the snake
  Direction snake_direction_;

  // Create Treats
  Treat treat_;
  const float treat_radius_ = 8.0f;

  // Create Obstacles
  std::vector<Obstacle> obstacles_;
  const float KObstacleSideLength = 40.0f;
  const size_t kNumberOfObstacles = 3;

  // Game over text
  const std::string kGameOverText = "Game Over!";
  const char* kTextColor = "white";
  bool is_game_over_ = false;

  // Track player's score
  const std::string kScoreText = "Score: ";
  const float kMargin = 70.0f;
  // Using int right here because game ends when it hits a negative score
  int score_;
};
}  // namespace snake
