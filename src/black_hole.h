#ifndef BLACK_HOLE_H
#define BLACK_HOLE_H

#include <vector> 

class BlackHole {
 public:

  BlackHole(): BH1x(480), BH1y(160), 
    BH2x(160), BH2y(320), 
    BH3x(480), BH3y(480), 
    BHmass(1e5),
    BHradius(50) {}

    // location and sizing in pixel space
    int BH1x; 
    int BH1y; 
    int BH2x; 
    int BH2y; 
    int BH3x;
    int BH3y; 
    int BHmass; 
    int BHradius; 

    void getGravitationalPull(BlackHole blackHole, int &Fx, int &Fy, int x, int y); 
 

 private:
    // expanding ? 
    // void expanding(bool isExpanding); 
    void computeForce(int &Fx, int &Fy, int x, int y, int BHx, int BHy); 
};

#endif