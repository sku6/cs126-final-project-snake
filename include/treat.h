#pragma warning(disable : 4819)
#pragma once

#include <cinder/Color.h>
#include "utilities.h"

namespace snake {
class Treat {
 public:
  /**
   * Default constructor
   */
  Treat();

  /**
   * Constructor that takes in a vec2 position as parameter
   */
  Treat(glm::vec2 position);

  /**
   * Create a new position for the treat
   * Increment score
   * @return New position for the treat
   */
  glm::vec2 SetNewPosition();

  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  glm::vec2 position_;
  const char* kTreatColor = "red";
};
}
