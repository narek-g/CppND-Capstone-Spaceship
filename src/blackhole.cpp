#include "blackhole.h"
#include "SDL.h"
#include <cmath> 


void BlackHole::computeForce(BlackHole blackhole, float &Fx, float &Fy, const int x, const int y, int BHx, int BHy){
    float m{1e3};

    blackhole.radiusSquared = pow((BHx - x),2) + pow((BHy - y),2) ; 
    // F = (G*M*m)/radiusSquared;
    blackhole.F = (G_CONSTANT*blackhole.BHmass * m)/blackhole.radiusSquared;
    Fx = F*cos(atan2((BHy - y),(BHx - x))); 
    Fy = F*sin(atan2((BHy - y),(BHx - x))); 
   }

void BlackHole::getGravitationalPull(BlackHole blackhole, float &Fx, float &Fy, const int x, const int y){ 
    // black hole 1 
    BH1Fx = 0; // update by reference in computeForece
    BH1Fy = 0; // update by reference in computeForce 
    computeForce(blackhole, BH1Fx, BH1Fy, x, y, blackhole.BH1x, blackhole.BH1y); 

    // black hole 2
    BH2Fx = 0; // update by reference in computeForece
    BH2Fy = 0; // update by reference in computeForce 
    computeForce(blackhole, BH2Fx, BH2Fy, x, y, blackhole.BH2x, blackhole.BH2y); 

    // black hole 3 
    BH3Fx = 0; // update by reference in computeForece
    BH3Fy = 0; // update by reference in computeForce 
    computeForce(blackhole, BH3Fx, BH3Fy, x, y, blackhole.BH3x, blackhole.BH3y); 

    Fx = BH1Fx + BH2Fx + BH3Fx; 
    Fy = BH1Fy + BH2Fy + BH3Fy; 
   }
