#include "extension.h"
using glm::vec2;

namespace snake {
Extension::Extension(const vec2 position) {
position_ = position;
}

vec2 Extension::GetPosition() const{
  return position_;
}
void Extension::SetPosition(const glm::vec2 position) {
  position_ = position;
}
void Extension::MoveUp(){
  position_ = vec2(GetPosition().x, GetPosition().y-kMoveIncrement);
}

void Extension::MoveDown(){
  position_ = vec2(GetPosition().x, GetPosition().y+kMoveIncrement);
}

void Extension::MoveLeft(){
  position_ = vec2(GetPosition().x-kMoveIncrement, GetPosition().y);
}

void Extension::MoveRight() {
  position_ = vec2(GetPosition().x+kMoveIncrement, GetPosition().y);
}
size_t Extension::GetKMoveIncrement() const {
  return kMoveIncrement;
}
}