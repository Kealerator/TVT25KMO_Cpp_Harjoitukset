#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;
public:
    Rectangle();
    double getArea();
    double getCircum();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
};

#endif // RECTANGLE_H
