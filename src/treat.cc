#include "treat.h"
using glm::vec2;

namespace snake {

Treat::Treat() {
  position_ = vec2(Utilities::GenerateRandomNumberBetween(101, 699),Utilities::GenerateRandomNumberBetween(101, 699));
}
}
