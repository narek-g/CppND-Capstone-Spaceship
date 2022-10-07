#ifndef BLACKHOLE_H
#define BLACKHOLE_H

#include <iostream>

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

    void getGravitationalPull(float &Fx, float &Fy, int x, int y){ 
    // black hole 1 
    float BH1Fx{0}; // update by reference in computeForece
    float BH1Fy{0}; // update by reference in computeForce 
    computeForce(BH1Fx, BH1Fy, x, y, blackHole.BH1x, blackHole.BH1y); 

    // black hole 2
    float BH2Fx{0}; // update by reference in computeForece
    float BH2Fy{0}; // update by reference in computeForce 
    computeForce(BH2Fx, BH2Fy, x, y, blackHole.BH2x, blackHole.BH2y); 

    // black hole 3 
    float BH3Fx{0}; // update by reference in computeForece
    float BH3Fy{0}; // update by reference in computeForce 
    computeForce(BH3Fx, BH3Fy, x, y, blackHole.BH3x, blackHole.BH3y); 

    Fx = BH1Fx + BH2Fx + BH3Fx; 
    Fy = BH1Fy + BH2Fy + BH3Fy; 
   }
    void something(){
      std::cout << "Hello \n"; 
    }

 private:
    // expanding ? 
    // void expanding(bool isExpanding); 
    void computeForce(float &Fx, float &Fy, int x, int y, int BHx, int BHy); 
};

#endif