#ifndef BLACK_HOLE_H
#define BLACK_HOLE_H

#include <vector> 

class BlackHole {
 public:

  BlackHole()
    : BH1.x(480), BH1.y(160), 
    BH2.x(160), BH2.y(320), 
    BH3.x(480), BH3.y(480), 
    BHmass(1e5);
    BHradius(50) {}

    // location and sizing in pixel space
    int BH1.x; 
    int BH1.y; 
    int BH2.x; 
    int BH2.y; 
    int BH3.x;
    int BH3.y; 
    int BHmass; 
    int BHradius; 
 

 private:
    // expanding ? 
    // void expanding(bool isExpanding); 
};

#endif