/*************************************************************************
    > File Name: picture.h
    > Author: xyx 
    > Mail: xiaoyx.bit@gmail.com 
    > Created Time: Thu 01 Dec 2016 23:13:10 GMT
 ************************************************************************/
#ifndef _PICTURE_H
#define _PICTURE_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class colour{
public:
    unsigned char r, g, b;
public:
    colour(unsigned char _r = 0, unsigned char _g = 0, unsigned char _b = 0){
        r = _r, g = _g, b = _b;
    }
};

class ppm{
    int height, width;
    int maxlen;
    unsigned char* data;

public:
    ppm(int _w, int _h);
    bool save(const char *fileName);
    void draw(int x, int y, colour c);
};
#endif
