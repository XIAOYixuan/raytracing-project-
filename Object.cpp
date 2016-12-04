/*************************************************************************
    > File Name: object.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com
    > Created Time: Fri 18 Nov 2016 11:49:26 GMT
 ************************************************************************/
#include "Object.h"
using namespace std;

Sphere::Sphere(vec3f CC, double rr) {
    C = CC;
    r = rr;
}

// calculate the intersection points (have 2 intersection points)
// return True for have intersection pt 
//      pa: the one close to the light
//      pb: the one far from the light
bool Sphere::intersectPoint(Ray ray, vec3f& pa, vec3f& pb) {
    // ray O V --> O + tV
    // sphere C r
    // (O+tV - C)^2 = r^2
    // V*V*t^2 + 2t(O-C)V + (O-C)(O-C)-r^2 = 0
    vec3f Op = ray.O - C;
    double a = ray.V * ray.V;
    double b = Op * ray.V * 2.0;
    double c = Op * Op - r * r;
    double delta = b*b - 4*a*c;
    if(delta < 0) return false;
    double ta = -b + sqrt(delta);
    ta /= 2*a;
    pa = ray.getPoint(ta);
    double tb = -b - sqrt(delta);
    tb /= 2*a;
    pb = ray.getPoint(tb);
    return true;
}

