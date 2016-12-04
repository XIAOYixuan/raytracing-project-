/*************************************************************************
    > File Name: main.cpp
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Fri 18 Nov 2016 11:49:30 GMT
 ************************************************************************/
#include "picture.h"
#include "Object.h"
#include "Camera.h"
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

    Ray ray(vec3f(3, 0, 0), vec3f(-1, 0, 0.05), 1);
    Sphere sphere(vec3f(0, 0, 0), 1);
    vec3f pa, pb;
    if(sphere.intersectPoint(ray, pa, pb)) {
        pa.print();
        pb.print();
    } else {
        puts("No intersection.");
    }
    */
    vec3f eyepoint = vec3f(300, 0, 0);
    vec3f canvas = vec3f(200, 0, 0);
    Sphere sphere(vec3f(0, 0, 0), 100);
    vec3f pa, pb;
    int n = 300;
    ppm myPic(n, n);
    Pinhole pinhole(eyepoint, canvas, vec3f(0, 0, 3), n, n, 1);

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++){
            vec3f viewpoint = pinhole.getPoint(i, j);
            Ray ray(eyepoint, viewpoint, 10);
            //viewpoint.print();
            if(sphere.intersectPoint(ray, pa, pb)) {
                myPic.draw(i, j, colour(153, 204, 255));
             //   printf("hit");
            } 
        }
    }
    myPic.save("sphere.ppm");
}
