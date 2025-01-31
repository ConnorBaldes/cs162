#include <iostream>
#include <cstdlib>
#include "Shape.h"
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int new_width, int new_height, string new_color) {

    width = new_width;

    height = new_height;

    name = "Rectangle";

    color = new_color;

}

Rectangle::Rectangle(const Rectangle& old_rectangle) {

    this -> width = old_rectangle.width;

    this -> height = old_rectangle.height;

    this -> name = old_rectangle.name;

    this -> color = old_rectangle.color;

}

Rectangle::~Rectangle() {



}

Rectangle& Rectangle:: operator=(const Rectangle& old_rectangle) {

    this -> width = old_rectangle.width;

    this -> height = old_rectangle.height;

    this -> name = old_rectangle.name;

    this -> color = old_rectangle.color; 


}


void Rectangle::set_width(float new_width) {

    width = new_width;
}

void Rectangle::set_height(float new_height) {

    height = new_height;
}

float Rectangle::get_width() {

    return width;
}

float Rectangle::get_height() {

    return height;
}

float Rectangle::area() const {

    float rectangle_area = (height*width);

    return rectangle_area;
}






