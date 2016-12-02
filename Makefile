CC=g++
CCFLAGS=-c -Wall

raytracer: main.o picture.o Object.o Ray.o vec3f.o 
	$(CC) -o raytracer main.o picture.o Object.o Ray.o vec3f.o -I.

