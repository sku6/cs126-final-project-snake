#pragma warning(disable : 4819)
#pragma once

#include "border.h"
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

namespace snake {

/**
 * An app for visualizing the behavior of an ideal gas.
 */
class SnakeApp : public ci::app::App {
 public:
  SnakeApp();

  void draw() override;
  void update() override;
  void keyDown(ci::app::KeyEvent event) override;

 private:
  const size_t kWindowSize = 800;
  const size_t kTopLeftX = 100;
  const size_t kTopLeftY = 100;
  const size_t kBottomRightX = 700;
  const size_t kBottomRightY = 700;

  Border border_;
};

}  // namespace snake
