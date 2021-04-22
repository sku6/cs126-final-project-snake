#pragma warning(disable : 4819)
#pragma once

#include "cinder/gl/gl.h"
#include "snake.h"

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
   void Display() const;

   /**
   * Updates the positions and velocities of all particles (based on the rules
   * described in the assignment documentation).
   */
   void AdvanceOneFrame();

   Snake& GetSnake();

  private:
   // Create container
   const char* kContainerColor = "white";
   glm::vec2 container_bottom_right_corner_;
   glm::vec2 container_top_left_corner_;

   // Create Snake
   Snake snake_; // This calls default constructor
   const float snake_width_ = 10.0f;

 };
}
