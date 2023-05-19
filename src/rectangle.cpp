#include "../header/rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    width = 0; 
    height = 0;
}
Rectangle::Rectangle(int w, int h)
{
    if(w<0)
    {
        throw runtime_error("Negative width");
    }
    width = w;
    if(h<0)
    {
        throw runtime_error("Negative height");
    }
    height = h;
}
int Rectangle::perimeter()
{
    return -1;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}
