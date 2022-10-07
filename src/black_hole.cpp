#include "black_hole.h"
#include<cmath> 


void BlackHole::computeForce(int &Fx, int &Fy, int x, int y, int BHx, int BHy){
    float radiusSquared; 
    float G{6.67e-11}; 
    float F; 
    float M{1e10};
    float m{1e3};

    radiusSquared = (BHx - x)**2 + (BHy - y)**2 ; 
    F = (G*M*m)/radiusSquared;
    Fx = F*cos(atan2((BHy - y)/(BHx - x))); 
    Fy = F*sin(atan2((BHy - y)/(BHx - x))); 
}

void BlackHole::getGravitationalPull(BlackHole blackHole, int &Fx, int &Fy, int x, int y){ 
    // black hole 1 
    int BH1Fx{0}; 
    int BH1Fy{0}; 
    BlackHole::computeForce(BH1Fx, BH1Fy, x, y, blackHole.BH1x, blackHole.BH1y); 

    // black hole 2

    // black hole 3 
}