/*************************************************************************
    > File Name: main.cpp
    > Author: yxx_yxx
    > Mail: *********
    > Created Time: Fri 18 Nov 2016 11:49:30 GMT
 ************************************************************************/
#include "picture.h"
#include "Object.h"
using namespace std;

int main() {
    // demo test ppm
    /*
    ppm myPic(300, 300);
    for(int i = 0; i < 100; i ++) {
        for(int j = 0; j < 300; j ++) {
            myPic.draw(i, j, colour(125, 255, 0));
        }
    }
    myPic.save("pic.ppm");
    */
    Ray ray(vec3f(3, 0, 0), vec3f(-1, 0, 0.05), 1);
    Sphere sphere(vec3f(0, 0, 0), 1);
    vec3f pa, pb;
    if(sphere.intersectPoint(ray, pa, pb)) {
        pa.print();
        pb.print();
    } else {
        puts("No intersection.");
    }
}
