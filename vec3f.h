/*************************************************************************
    > File Name: vec3f.h
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 25 Nov 2016 11:27:06 GMT
 ************************************************************************/
#ifndef _VEC3F_H
#define _VEC3F_H

#include <iostream>
#include <cstdio>
#include <cmath>
class vec3f{
    public:
    double x, y, z;
    vec3f(double _x = 0, double _y = 0, double _z = 0) {
        x = _x, y = _y, z = _z;
    }
    // dot product
    double operator * (const vec3f p) const {
        return  x*p.x + y*p.y + z*p.z;
    }
    // cross product
    vec3f operator ^  (const vec3f p) const {
        return vec3f(y*p.z-z*p.y, z*p.x-x*p.z, x*p.y-y*p.x);
    }

    vec3f operator * (const double a) const {
        return vec3f(a*x, a*y, a*z);
    }

    vec3f operator / (const double a) const {
        return vec3f(x/a, y/a, z/a);
    }

    vec3f operator - (const vec3f p) const {
        return vec3f(x-p.x, y-p.y, z-p.z);
    }
    vec3f operator + (const vec3f p) const {
        return vec3f(x+p.x, y+p.y, z+p.z);
    }


    double length() {
        return sqrt(x*x + y*y + z*z);
    }
    // for debug
    void print() {
        printf("%.2f %.2f %.2f\n", x, y, z);
    }
};

vec3f operator * (const double t, const vec3f p);

#endif //_VEC3F_H
