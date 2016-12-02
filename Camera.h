/*************************************************************************
    > File Name: Camera.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 25 Nov 2016 11:21:33 GMT
 ************************************************************************/

#include "vec3f.h"
using namespace std;

class Pinhole{
   vec3f E; // eyepoint
   vec3f C; // look at point
   vec3f U; // uppoint
   vec3f L; // norm look at vec
   vec3f u, v; // for scanning

public:
   Pinhole(vec3f EE, vec3f CC, vec3f UU) {
       E = EE, C = CC, U = UU;
       L = (C-E);
       L = L/L.length();
       utmp = L^U;
       vtmp = utmp^L;
   }
};
