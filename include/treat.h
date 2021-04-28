#pragma warning(disable : 4819)
#pragma once

#include <glm/vec2.hpp>
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
   * Create a new position for the treat
   * Increment score
   * @return New position for the treat
   */
  glm::vec2 SetNewPosition();

  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;
  void SetColor(char* color);

 private:
  glm::vec2 position_;
  const char* kTreatColor = "red";
};
}