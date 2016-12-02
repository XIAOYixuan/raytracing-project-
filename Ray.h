/*************************************************************************
    > File Name: Ray.h
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 02 Dec 2016 01:22:44 GMT
 ************************************************************************/
#ifndef _RAY_H
#define _RAY_H
#include "vec3f.h"
using namespace std;

class Ray{
public:
    vec3f O; // origin
    vec3f V; // direction
    double t; // ray parameter
    double ta, tb; // for bounded ray

public:
    Ray(vec3f OO, vec3f VV, double tt);
    vec3f getPoint(double tt);
};
#endif // _RAY_H
