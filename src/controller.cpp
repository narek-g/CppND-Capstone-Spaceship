#include "controller.h"
#include <iostream>
#include "SDL.h"
#include "spaceship.h"

void Controller::ChangeDirection(SpaceShip &spaceship, SpaceShip::Direction input,
                                 SpaceShip::Direction opposite) const {
  if (spaceship.direction != opposite || spaceship.size == 1) spaceship.direction = input;
  return;
}

void Controller::HandleInput(bool &running, SpaceShip &spaceship) const {
  SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      running = false;
    } else if (e.type == SDL_KEYDOWN) {
      switch (e.key.keysym.sym) {
        case SDLK_UP:
          ChangeDirection(spaceship, SpaceShip::Direction::kUp,
                          SpaceShip::Direction::kDown);
          break;

        case SDLK_DOWN:
          ChangeDirection(spaceship, SpaceShip::Direction::kDown,
                          SpaceShip::Direction::kUp);
          break;

        case SDLK_LEFT:
          ChangeDirection(spaceship, SpaceShip::Direction::kLeft,
                          SpaceShip::Direction::kRight);
          break;

        case SDLK_RIGHT:
          ChangeDirection(spaceship, SpaceShip::Direction::kRight,
                          SpaceShip::Direction::kLeft);
          break;
      }
    }
  }
}