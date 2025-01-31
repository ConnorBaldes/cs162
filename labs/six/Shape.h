#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
#include <cstdlib>

using namespace std;

class Shape {

    protected:

        string name;
        string color;

    public:

        Shape();

        Shape(const Shape&);

        ~Shape();

        Shape& operator=(const Shape&);

        string get_name();

        string get_color();

        void set_name(string);

        void set_color(string);

        float area();

};



#endif