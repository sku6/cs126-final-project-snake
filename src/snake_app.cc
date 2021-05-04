#include "snake_app.h"
#include "direction.h"
using ci::Color;
using glm::vec2;

namespace snake {

SnakeApp::SnakeApp()
    : border_(Border(vec2(kTopLeftX, kTopLeftY),
                       vec2(kBottomRightX, kBottomRightY))) {
  ci::app::setWindowSize(kWindowSize, kWindowSize);
}

void SnakeApp::draw() {
  ci::Color background_color("black");
  ci::gl::clear(background_color);

  // Display the boarder
  border_.Display();
}

void SnakeApp::update() {
  border_.AdvanceOneFrame();
}

void SnakeApp::keyDown(ci::app::KeyEvent event) {
  switch (event.getCode()) {
    case ci::app::KeyEvent::KEY_UP:
      // make snake move up
      border_.SetDirection(Direction::kUp);
      border_.GetSnake().MoveUp();
      break;

    case ci::app::KeyEvent::KEY_LEFT:
      // make snake move up
      border_.SetDirection(Direction::kLeft);
      border_.GetSnake().MoveLeft();
      break;

    case ci::app::KeyEvent::KEY_RIGHT:
      // make snake move up
      border_.SetDirection(Direction::kRight);
      border_.GetSnake().MoveRight();
      break;

    case ci::app::KeyEvent::KEY_DOWN:
      // make snake move up
      border_.SetDirection(Direction::kDown);
      border_.GetSnake().MoveDown();
      break;
  }
}
}  // namespace snake
