#include "snake_app.h"
using ci::Color;
using glm::vec2;

namespace snake {

SnakeApp::SnakeApp()
    : boarder_(Border(vec2(kTopLeftX, kTopLeftY),
                       vec2(kBottomRightX, kBottomRightY))) {
  ci::app::setWindowSize(kWindowSize, kWindowSize);
}

void SnakeApp::draw() {
  ci::Color background_color("black");
  ci::gl::clear(background_color);

  // Display the boarder
  boarder_.Display();
}

void SnakeApp::update() {

}

void SnakeApp::keyDown(ci::app::KeyEvent event) {
  switch (event.getCode()) {
    case ci::app::KeyEvent::KEY_UP:
      // make snake move up
      boarder_.GetSnake().MoveUp();
      break;

    case ci::app::KeyEvent::KEY_LEFT:
      // make snake move up
      boarder_.GetSnake().MoveLeft();
      break;

    case ci::app::KeyEvent::KEY_RIGHT:
      // make snake move up
      boarder_.GetSnake().MoveRight();
      break;

    case ci::app::KeyEvent::KEY_DOWN:
      // make snake move up
      boarder_.GetSnake().MoveDown();
      break;
  }
}
}  // namespace snake
