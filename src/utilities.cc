#include "utilities.h"

namespace snake {
int Utilities::GenerateRandomNumberBetween(int lower_bound, int upper_bound) {
  std::random_device randomDevice;
  std::mt19937 gen(randomDevice());

  std::uniform_int_distribution<int> random_bit(lower_bound, upper_bound);
  return random_bit(gen);
}
}
