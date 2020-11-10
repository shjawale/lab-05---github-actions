#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle(){
	this->width = 0;
	this->height = 0;
}

Rectangle::Rectangle(int w, int h){
	this->width = w;
	this->height = h;
}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::get_width(){
	return this->width;
}

int Rectangle::get_height(){
	return this->height;
}

int Rectangle::area(){
	int answer = this->width * this->height;
	if (this->width < 0 || this->height < 0){
		return 0;
	}
	return answer;
}

int Rectangle::perimeter(){
	int answer = 2 * (this->width + this->height);
	if (this->width < 0 || this->height < 0){
		return 0;
	}
	return answer;
}
