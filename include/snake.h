#pragma warning(disable : 4819)
#pragma once

namespace snake {
class Snake {
 public:
  /**
   * Constructor
   */
  Snake();

  /**
   * Adds a new part to the end of the snake once the snake eats food
   */
  void addPart();

  /**
   * @return Size(length) of the snake
   */
  size_t GetSize();

 private:
  size_t size_;
};
}  // namespace snake

