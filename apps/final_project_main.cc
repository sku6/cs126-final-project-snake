#include "snake_app.h"

using snake::SnakeApp;

void prepareSettings(SnakeApp::Settings* settings) {
  settings->setResizable(false);
}

// This line is a macro that expands into an "int main()" function.
CINDER_APP(SnakeApp, ci::app::RendererGl, prepareSettings);