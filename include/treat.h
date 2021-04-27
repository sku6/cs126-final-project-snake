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

  ci::Color GetColor() const;
  glm::vec2 GetPosition() const;

 private:
  glm::vec2 position_;
  const char* kTreatColor = "red";
};
}
