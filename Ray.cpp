/*************************************************************************
    > File Name: Ray.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 02 Dec 2016 16:55:42 GMT
 ************************************************************************/

#include "Ray.h"
using namespace std;

Ray::Ray(vec3f OO, vec3f VV, double tt = 1) {
    O = OO; 
    V = VV;
    t = tt;
}

vec3f Ray::getPoint(double tt) {
    return O + tt*V;
}

