#include "extension.h"
using glm::vec2;

namespace snake {
Extension::Extension(const vec2 position) {
position_ = position;
}

vec2 Extension::GetPosition() {
  return position_;
}
void Extension::SetPosition(const glm::vec2 position) {
  position_ = position;
}

}