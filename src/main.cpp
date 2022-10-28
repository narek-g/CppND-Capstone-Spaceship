#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main() {
  const float screenRatio{1.5};
  const std::size_t kFramesPerSecond{20};
  const std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  const std::size_t kScreenWidth{640};
  const std::size_t kScreenHeight{640};
  const std::size_t kGridWidth{screenRatio*32};
  const std::size_t kGridHeight{screenRatio*32};

  // consider adding black hole values here as constants? 

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  // std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}