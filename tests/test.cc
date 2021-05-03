#include <catch2/catch.hpp>
#include <border.h>
#include <snake.h>

using glm::vec2;
using snake::Border;
using snake::Snake;

TEST_CASE("Check snake colliding with the wall") {
  // Set container boundaries
  vec2 top_left(100, 100);
  vec2 bottom_right(700, 700);

  SECTION("Snake collied with top wall") {
    snake::Snake snake(vec2(200, 100));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeColliedWithWall() == true);
  }

  SECTION("Snake collied with bottom wall") {
    snake::Snake snake(vec2(200, 700));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeColliedWithWall() == true);
  }

  SECTION("Snake collied with left wall") {
    snake::Snake snake(vec2(100, 200));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeColliedWithWall() == true);
  }

  SECTION("Snake collied with right wall") {
    snake::Snake snake(vec2(700, 200));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeColliedWithWall() == true);
  }

  SECTION("Snake not colliding with the wall") {
    snake::Snake snake(vec2(200, 200));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeColliedWithWall() == false);
  }
}

TEST_CASE("Check if game is over") {
  // Set container boundaries
  vec2 top_left(100, 100);
  vec2 bottom_right(700, 700);

  SECTION("Game is over after snake collies with a wall") {
    snake::Snake snake(vec2(200, 100));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.IsGameOver() == true);
  }

  SECTION("Game is not over") {
    snake::Snake snake(vec2(200, 200));
    Border border(top_left, bottom_right, snake);
    border.AdvanceOneFrame();
    REQUIRE(border.IsGameOver() == false);
  }
}