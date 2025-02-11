#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <vector>
#include "SDL.h"
#include "blackhole.h"

class SpaceShip {
 public:
  enum class Direction { kUp, kDown, kLeft, kRight };
  enum class Impulse { kZero, kUp, kDown, kLeft, kRight }; 

  SpaceShip(int grid_width, int grid_height)
      : grid_width(grid_width),
        grid_height(grid_height),
        head_x(grid_width / 2),
        head_y(grid_height / 2) {}

  void Update(SpaceShip &spaceship, BlackHole &blackhole);

  void GrowBody();
  bool SnakeCell(int x, int y);
  void getNetForce(BlackHole &blackhole);

  Direction direction = Direction::kUp;
  Impulse impulse = Impulse::kZero; 

  float speed{0.1f};
  int size{1};
  bool alive{true};
  float head_x;
  float head_y;
  std::vector<SDL_Point> body;

  float shipMass{1e3};    // kg 
  float netXForce{0};     // Newtons 
  float netYForce{0};     // Newtons 
  float impulseForce{0.2};   // Newtons 

 private:
  void UpdateHead();
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell);

  bool growing{false};
  int grid_width;
  int grid_height;

  // blackhole net forces 
  float BHFx{0}; 
  float BHFy{0}; 

  float t{100}; // time interval (frameRate) - better to pass?
  double FORCE_STRENGTH{3e6}; // constant 
  int delta_x{0};
  int delta_y{0}; 
};

#endif