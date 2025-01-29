#include <iostream>
#include <cstdlib>
#include "Shape.h"

using namespace std;


int main() {

    Shape basic_shape;

    cout << "Name: " << basic_shape.get_name() << endl;
    cout << "Color: " << basic_shape.get_color() << endl;


    return 0;
}