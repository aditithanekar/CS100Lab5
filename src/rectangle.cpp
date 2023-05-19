#include "../header/rectangle.hpp"

#include <iostream>
using namespace std;

Rectangle::Rectangle(){
    width = 0;
    height = 0;
}

Rectangle::Rectangle(int w, int h){
    if(w < 0){
        throw runtime_error("Input positive width");
    }
    
    this->width = w;

    if(h < 0){
        throw runtime_error("Input positive height");
    }
    
    this->height = h;
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

int Rectangle::perimeter(){
    return width*2+height*2;
}


