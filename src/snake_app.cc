#include "snake_app.h"
using ci::Color;
using glm::vec2;

namespace snake {

SnakeApp::SnakeApp()
    : boarder_(Boarder(vec2(kTopLeftX, kTopLeftY),
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
      boarder_.GetSnake().MoveUp();
      break;

    case ci::app::KeyEvent::KEY_RIGHT:
      // make snake move up
      boarder_.GetSnake().MoveUp();
      break;

    case ci::app::KeyEvent::KEY_DOWN:
      // make snake move up
      boarder_.GetSnake().MoveUp();
      break;
  }
}
}  // namespace snake
