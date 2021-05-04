#pragma warning(disable : 4819)
#pragma once

#include <glm/vec2.hpp>

namespace snake {
class Extension {
 public:
  /**
   * Default constructor
   */
  Extension(const glm::vec2 position);

  glm::vec2 GetPosition() const;
  void SetPosition(const glm::vec2 position);

 private:
  glm::vec2 position_;
};
}  // namespace snake
