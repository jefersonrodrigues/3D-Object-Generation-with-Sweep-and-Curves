#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
    public:
        double x, y, z;
        Point();
        Point(double x, double y, double z);
        Point(double x, double y);

        void Xrotate(double ang);
        void Yrotate(double ang);
        void Zrotate(double ang);
        void Translate(double x, double y, double z);
        void Projection(double d);
};
#endif // POINT_H_INCLUDED
