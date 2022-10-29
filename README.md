# CPPND: Spaceship Exploration! 

Capstone project for [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<!-- <img src="snake_game.gif"/> -->

## How to Play
The game is inspired by the classical snake game, except, the user is in control of a spaceship. In space, once you are in motion, you remain in motion until another force is applied (Newtons first law). The user applies a force using the arrow keys. Each press, incrementally adds an impulse in the opposite direction of the arrow (want to go up, press up and a force is applied downwards). 

The goal, is for the user to regain control of the spaceship and collect the food items (orange blocks).

To make the game more interesting, there are black holes in space (don't worry, they won't swallow the spaceship), which will alter the users control of the spaceship as they exhibit an external force. 

Good luck! 

## CPPND Project Rubric 
The Spaceship Exploration project demonstrates various C++ methodologies learend thoughout the nanodegree program, such as: 
* Object oriented design 
  * Specifically, encapsulation used for new Black Hole object, 
  * In addition to constructors, public and private declerations. 
* I/O
  * Accepting user inputs to process the game
* Concurency (multi-threading)
* Memory management
  * Using references in function declerations 

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
