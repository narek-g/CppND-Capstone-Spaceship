#ifndef BLACK_HOLE_H
#define BLACK_HOLE_H

#include "SDL.h"

class BlackHole {
 public:

  BlackHole(int x, int y)
      : loc_x(x), 
        loc_y(y) {}


  int loc_x; 
  int loc_y; 
  int radius{50}; // pixel spacing 
  int mass{1e5}; // Newtons 

 private:
   // expanding ? 
   // void expanding(bool isExpanding); 
};

#endif