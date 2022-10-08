#include "blackhole.h"
#include "SDL.h"
#include <cmath> 


void BlackHole::computeForce(BlackHole blackHole, float &Fx, float &Fy, int x, int y, int BHx, int BHy){
    float radiusSquared; 
    float G{6.67e-11}; 
    float F; 
    float M{1e10};
    float m{1e3};

    radiusSquared = pow((BHx - x),2) + pow((BHy - y),2) ; 
    // F = (G*M*m)/radiusSquared;
    F = (G*blackHole.BHmass * m)/radiusSquared;
    Fx = F*cos(atan2((BHy - y),(BHx - x))); 
    Fy = F*sin(atan2((BHy - y),(BHx - x))); 
   }

void BlackHole::getGravitationalPull(BlackHole blackHole, float &Fx, float &Fy, int x, int y){ 
    // black hole 1 
    float BH1Fx{0}; // update by reference in computeForece
    float BH1Fy{0}; // update by reference in computeForce 
    computeForce(blackHole, BH1Fx, BH1Fy, x, y, blackHole.BH1x, blackHole.BH1y); 

    // black hole 2
    float BH2Fx{0}; // update by reference in computeForece
    float BH2Fy{0}; // update by reference in computeForce 
    computeForce(blackHole, BH2Fx, BH2Fy, x, y, blackHole.BH2x, blackHole.BH2y); 

    // black hole 3 
    float BH3Fx{0}; // update by reference in computeForece
    float BH3Fy{0}; // update by reference in computeForce 
    computeForce(blackHole, BH3Fx, BH3Fy, x, y, blackHole.BH3x, blackHole.BH3y); 

    Fx = BH1Fx + BH2Fx + BH3Fx; 
    Fy = BH1Fy + BH2Fy + BH3Fy; 
   }
