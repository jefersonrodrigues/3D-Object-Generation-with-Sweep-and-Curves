#ifndef __CANVAS_2D__H__
#define __CANVAS_2D__H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <GL/glut.h>
#include <GL/freeglut_ext.h> //callback da wheel do mouse.

#define PI_2 6.28318530717
#define PI   3.14159265359

#define Y_CANVAS_CRESCE_PARA_CIMA 1

void point(float x, float y);
void line( float x1, float y1, float x2, float y2 );
void rect( float x1, float y1, float x2, float y2 );
void rectFill( float x1, float y1, float x2, float y2 );
void polygon(float vx[], float vy[], int n_elems);
void polygonFill(float vx[], float vy[], int n_elems);
void circle( float x, float y, float radius, int div );
void circleFill( float x, float y, float radius, int div );
void color(float r, float g, float b);
void color(float r, float g, float b, float alpha);
void color(int index);
void clear(float r, float g, float b);
void text(float x, float y, const char *t);
void text(float x, float y, const char c);
void text(float x, float y, const int i);
void text(float x, float y, const double d);
void translate(float x, float y);
void init(int *w, int *h, const char *title);
void run();

#endif
