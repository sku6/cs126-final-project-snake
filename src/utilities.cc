#include "utilities.h"

namespace snake {
int Utilities::GenerateRandomNumberBetween(int lower_bound, int upper_bound) {
  std::random_device randomDevice;
  std::mt19937 gen(randomDevice());

  std::uniform_int_distribution<int> random_bit(lower_bound, upper_bound);
  return random_bit(gen);
}
float Utilities::GetDistance(glm::vec2 point_1, glm::vec2 point_2) {
  return (float)pow((pow((point_2.x-point_1.x), 2) + pow((point_2.y-point_1.y), 2)), 0.5);
}
}
