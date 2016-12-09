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
//      interp: the closer point to the origin of the ray
bool Sphere::intersectPoint(Ray ray, vec3f& interp) {
    // ray O V --> O + tV
    // sphere C r
    // (O+tV - C)^2 = r^2
    // V*V*t^2 + 2t(O-C)V + (O-C)(O-C)-r^2 = 0
    // todo: what if the origin of the ray is in sphere
    vec3f Op = ray.O - C;
    double a = ray.V * ray.V;
    double b = Op * ray.V * 2.0;
    double c = Op * Op - r * r;
    double delta = b*b - 4*a*c;
    if(delta < 0) return false;
    double ta = -b + sqrt(delta);
    double tb = -b - sqrt(delta);
    ta /= 2*a;
    tb /= 2*a;
    if(fabs(ta) < fabs(tb)) {
        interp = ray.getPoint(ta);
    } else {
        interp = ray.getPoint(tb);
    }
    return true;
}

// p is on the surface of sphere
vec3f Sphere::normVecAt(vec3f p) {
    return p-C;
}

