/*************************************************************************
    > File Name: picture.cpp
    > Author: xyx 
    > Mail: xiaoyx@gmail.com 
    > Created Time: Fri 18 Nov 2016 11:50:09 GMT
 ************************************************************************/
#include "picture.h"
using namespace std;

ppm::ppm(int _w = 0, int _h = 0) {
    width = _w;
    height = _h;
    maxlen = 3*width*height;
    data = new unsigned char[maxlen];
    fill(data, data+maxlen, 255);
}

bool ppm::save(const char *fileName) {
    FILE *fp = fopen(fileName, "wb");
    if (!fp) return false;
    fprintf(fp, "P6\n%d %d\n255\n", width, height);
    fwrite(data, 3, width*height, fp);
    fclose(fp);
    return false;
}

void ppm::draw(int x, int y, colour c) {
    int before = x*width+y;
    before *= 3;
    data[before+0] = c.r;
    data[before+1] = c.g;
    data[before+2] = c.b;
}
