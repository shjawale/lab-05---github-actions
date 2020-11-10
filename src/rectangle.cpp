#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::get_width(){
    return width;
}

int Rectangle::get_height(){
    return height;
}

int Rectangle::area(){
    return -1;
}

int Rectangle::perimeter(){
    return -1;
}
