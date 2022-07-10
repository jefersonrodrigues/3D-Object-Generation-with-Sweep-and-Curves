#include "Point.h"
#include <cmath>

Point::Point(){
    x = y = z = 0;
}

Point::Point(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
    this->z = 0;
}

void Point::Xrotate(double ang){
    double temp = y;
    y = y*cos(ang) - z*sin(ang);
    z = temp*sin(ang) + z*cos(ang);
}

void Point::Yrotate(double ang){
    double temp = x;
    x = x*cos(ang) + z*sin(ang);
    z = -temp*sin(ang) + z*cos(ang);
}

void Point::Zrotate(double ang){
    double temp = x;
    x = x*cos(ang) - y*sin(ang);
    y = temp*sin(ang) + y*cos(ang);
}

void Point::Translate(double x, double y, double z){
    this->x += x;
    this->y += y;
    this->z += z;
}

void Point::Projection(double d){
    this->x = (x*d) / z;
    this->y = (y*d) / z;
    this->z = 0;
}


