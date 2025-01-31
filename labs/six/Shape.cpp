
#include <iostream> 
#include <cstdlib>
#include "Shape.h"
using namespace std;


Shape::Shape() {

    name =" ";

    color = " ";

}

Shape::Shape(const Shape& old_shape) {

this -> name = old_shape.name;

this -> color = old_shape.color;


}

Shape::~Shape() {


}

Shape& Shape:: operator=(const Shape& old_shape) {

    this -> name = old_shape.name;

    this -> color = old_shape.color;
}

string Shape::get_name() {

    return name;
}

string Shape::get_color() {

    return color;
}

void Shape::set_name(string new_name) {

    name = new_name;
}

void Shape::set_color(string new_color) {

    color = new_color;
}

float Shape::area() {

    return 0;
}