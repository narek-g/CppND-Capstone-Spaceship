#ifndef BLACKHOLE_H
#define BLACKHOLE_H

#include <iostream>
#include "SDL.h"

const float G_CONSTANT{6.67e-11}; 

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
    int BHmass; // kg
    int BHradius; // meters

    void getGravitationalPull(BlackHole blackhole, float &Fx, float &Fy, const int x, const int y); 
    void something(){
      std::cout << "Hello \n"; 
    }

 private:
    // expanding ? 
    // void expanding(bool isExpanding); 
    void computeForce(BlackHole blackhole, float &Fx, float &Fy, const int x, const int y, int BHx, int BHy); 
    // black hole 1 
    float BH1Fx; // update by reference in computeForece
    float BH1Fy; // update by reference in computeForce 
    // black hole 2
    float BH2Fx; // update by reference in computeForece
    float BH2Fy; // update by reference in computeForce 
    // black hole 3 
    float BH3Fx; // update by reference in computeForece
    float BH3Fy; // update by reference in computeForce 

    float radiusSquared{0}; // used in computeForce calc
    float F{0};             // used in computeForce method 
};

#endif