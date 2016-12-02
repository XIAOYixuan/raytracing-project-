/*************************************************************************
    > File Name: vec3i.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 25 Nov 2016 11:22:55 GMT
 ************************************************************************/
#include "vec3f.h"
using namespace std;

vec3f operator* (const double a, const vec3f p) {
    return vec3f(a*p.x, a*p.y, a*p.z);
}

