#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main() {
  const int screenRatio{1};
  constexpr std::size_t kFramesPerSecond{20};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{screenRatio*32};
  constexpr std::size_t kGridHeight{screenRatio*32};

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