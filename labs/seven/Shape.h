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

        virtual float area() const = 0;




};

bool operator>( const Shape& , const Shape& );

bool operator<(const Shape& , const Shape& );

void print_shape_info(Shape*);



#endif