#pragma warning(disable : 4819)
#pragma once

#include "cinder/gl/gl.h"
#include "direction.h"
#include "snake.h"
#include "treat.h"

namespace snake {
 class Border {
  public:
       /**
        * Using the top left corner and the bottom right corner to create a box for the snake game
        */
   Border(const glm::vec2& top_left_corner,
           const glm::vec2& bottom_right_corner);

   /**
   * Displays the container walls and the current positions of the particles.
   */
   void Display();

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
    * Check if the snake has eaten a treat, the treat should disappear after being eaten
    * Score should go up by 1
    * @return
    */
   bool HasSnakeEatenTreat();

   /**
    * Update the variable is_game_over_
    */
   void IsGameOver();

   Snake& GetSnake();

   void SetDirection(Direction direction);

  private:
   // Create container
   const char* kContainerColor = "white";
   glm::vec2 container_bottom_right_corner_;
   glm::vec2 container_top_left_corner_;

   // Create Snake
   Snake snake_; // This calls default constructor
   const float snake_width_ = 10.0f;

   // Direction of the snake
   Direction snake_direction_;

   // Create Treats
   Treat treat_;
   const float treat_radius_ = 8.0f;

   // Game over text
   const std::string kGameOverText = "Game Over!";
   const char* kTextColor = "white";
   bool is_game_over_ = false;

   // Track player's score
   size_t score_;
 };
}
