#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Shape.h"
#include "circle.h"

using namespace std;

Circle::Circle(float radius, string color) {

    this-> radius = radius;

    this -> name = "Circle";

    this -> color = color;

}

Circle::Circle(const Circle& old_circle) {

    this -> radius = old_circle.radius;

    this -> name = old_circle.name;

    this -> color = old_circle.color;

}

Circle::~Circle() {



}

Circle& Circle::operator=(const Circle& old_circle) {

    this -> radius = old_circle.radius;

    this -> name = old_circle.name;

    this -> color = old_circle.color;

    return *this;

}

float Circle::get_radius() {

    return radius;

}

string Circle::set_name() {

    return name;
}

string Circle::set_color() {

    return color;
}

void Circle::set_radius(float new_radius) {

    radius = new_radius;

}

float Circle::area() const{

    float circle_area = (pow((3.14*radius),2));

    //cout << circle_area;

    return circle_area;
}

