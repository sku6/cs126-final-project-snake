#pragma warning(disable : 4819)
#pragma once

#include "cinder/gl/gl.h"
#include "snake.h"

namespace snake {
 class Boarder {
  public:
   /**
    * Using the top left corner and the bottom right corner to create a box for the snake game
    */
   Boarder(const glm::vec2& top_left_corner,
           const glm::vec2& bottom_right_corner, Snake snake);

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
    * A helper method that generates a random number between the two given
    * boundaries
    *
    * Code from:
    * https://stackoverflow.com/questions/19238403/random-function-generator-between-two-integers-c
    * @param lower_bound The lower bound of the random number generated
    * @param upper_bound The upper bound of the random number generated
    * @return An integer between the boundaries given
    */
   int GenerateRandomNumberBetween(int lower_bound, int upper_bound);

   /**
   * Create a snake in the box
   */
   void CreateSnake();

  private:
   // Create container
   const char* kContainerColor = "white";
   glm::vec2 container_bottom_right_corner_;
   glm::vec2 container_top_left_corner_;

   // Create Snake
   Snake snake_;
   const float snake_width_ = 10.0f;

 };
}
