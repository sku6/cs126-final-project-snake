#pragma warning(disable : 4819)
#pragma once

#include <glm/vec2.hpp>
#include "utilities.h"

namespace snake {
class Treat {
 public:
  /**
   * Default constructor
   */
  Treat();

 private:
  glm::vec2 position_;
};
}
