#pragma warning(disable : 4819)
#pragma once

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

namespace idealgas {

/**
 * An app for visualizing the behavior of an ideal gas.
 */
class IdealGasApp : public ci::app::App {
 public:

  void draw() override;
  void update() override;

 private:
  // provided that you can see the entire UI on your screen.
  const int kWindowSize = 1800;
  const int kHistogramMargin = 50;
  const int kHistogramSideLength = 275;
  const int kHistogramSideWidth = 400;
};

}  // namespace idealgas
