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
   vec3f C; // centre of intersect
   vec3f U; // uppoint
   vec3f L; // norm look at vec / view direction
   vec3f u, v; // for scanning
   double width, height; // canvas width and height
   double length; // distance from the camera to the centre of the image
   double aspectRatio; // aspect ratio 
   double xres, yres; // todo x resolution and y resolution
   vec3f lup; // left up point

public:
   Pinhole(vec3f EE, vec3f CC, vec3f UU, double _w, double _h, double _l);
   vec3f getPoint(int x, int y);

};
