#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "spaceship.h"
#include "blackhole.h" 

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();
  void drawBlackHole(int centerX, int centerY, int radius);

  void Render(SpaceShip const spaceship, BlackHole blackHole, SDL_Point const &food);
  void UpdateWindowTitle(int score, int fps);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif