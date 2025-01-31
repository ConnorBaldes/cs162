 #include <iostream>
#include <cstdlib>
#include "Shape.h"
#include "circle.h"
#include "rectangle.h"

using namespace std;



int main() {

    Circle basic_circle( 4.0, "blue");

    Rectangle basic_rectangle(4,5,"red");


    //cout << "Circle area: " << basic_circle.area() << endl;

    //cout << "Rectangle area: " << basic_rectangle.area() << endl;

    Shape* s1 = &basic_circle;

    Shape* s2 = &basic_rectangle;

    print_shape_info(s1);

    print_shape_info(s2);

    if((*s1) > (*s2)) {

        cout << "Circle area larger" << endl;
    }
     
    


    //cout << "Name: " << basic_shape.get_name() << endl;
    //cout << "Color: " << basic_shape.get_color() << endl;


    return 0;
}
