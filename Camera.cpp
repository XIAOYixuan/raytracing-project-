/*************************************************************************
    > File Name: Camera.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 25 Nov 2016 11:43:54 GMT
 ************************************************************************/

#include "Camera.h"
using namespace std;

Pinhole::Pinhole(vec3f EE, vec3f CC, vec3f UU, double _w, double _h, double _l) {
    E = EE, C = CC, U = UU;
    width = _w, height = _h, length = _l;
    xres = width, yres = height; // default set, could be different
    aspectRatio = width / height;  // default set
    L = (C-E);  L = L/L.length();
    u= L^U; u = u/u.length();
    v= u^L; 
    double tanv = 0.5*height / length; 
    lup = C - width*0.5*u - height*0.5*v;
    v = v * (yres/xres);
}

// get real point at pixel(i, j)
// row i col j
vec3f Pinhole::getPoint(int i, int j) {
    return lup+u*j+v*i;
}



