#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "spaceship.h"
#include "blackhole.h"

class Controller {
 public:
  void HandleInput(bool &running, SpaceShip &spaceship) const;

 private:
  void ChangeDirection(SpaceShip &spaceship, SpaceShip::Direction input,
                       SpaceShip::Direction opposite) const;
};

#endif