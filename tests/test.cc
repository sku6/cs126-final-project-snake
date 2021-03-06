#include <border.h>
#include <snake.h>

#include <catch2/catch.hpp>

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

TEST_CASE("Check if snake eats the treat properly") {
  // Set container boundaries
  vec2 top_left(100, 100);
  vec2 bottom_right(700, 700);
  snake::Snake snake(vec2(200, 200));

  SECTION("Snake eats a treat, increment score") {
    snake::Treat treat(vec2(200, 200));
    Border border(top_left, bottom_right, snake, treat);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeEatenTreat() == true);
    REQUIRE(border.GetScore() == 1);
  }

  SECTION("Snake does not eat the treat") {
    snake::Treat treat(vec2(300, 200));
    Border border(top_left, bottom_right, snake, treat);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeEatenTreat() == false);
    REQUIRE(border.GetScore() == 0);
  }
}

TEST_CASE("Check if snake collies with the obstacle") {
  // Set container boundaries
  vec2 top_left(100, 100);
  vec2 bottom_right(700, 700);
  snake::Snake snake(vec2(200, 200));

  SECTION("Snake collides with an obstacle, decrement score") {
    snake::Obstacle obstacle(vec2(200, 200));
    Border border(top_left, bottom_right, snake, obstacle);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeHitObstacle() == true);
    REQUIRE(border.GetScore() == -1);
    REQUIRE(border.IsGameOver() == true);
  }

  SECTION("Snake does not collide with an obstacle") {
    snake::Obstacle obstacle(vec2(300, 200));
    Border border(top_left, bottom_right, snake, obstacle);
    border.AdvanceOneFrame();
    REQUIRE(border.HasSnakeHitObstacle() == false);
    REQUIRE(border.GetScore() == 0);
    REQUIRE(border.IsGameOver() == false);
  }
}