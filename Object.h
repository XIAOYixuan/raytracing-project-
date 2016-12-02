/*************************************************************************
    > File Name: Object.h
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 25 Nov 2016 11:37:45 GMT
 ************************************************************************/
#ifndef _OBJECT_H
#define _OBJECT_H

#include "Ray.h"
using namespace std;

class Object{
    bool intersectPoint(Ray ray);

//    Colour getColourAt(vec3f p);
};

class Sphere: public Object {
    vec3f C; // center
    double r; // radius
    public:
    Sphere(vec3f CC, double rr);
    bool intersectPoint(Ray ray, vec3f& pa, vec3f& pb);
};
#endif // _OBJECT_H
