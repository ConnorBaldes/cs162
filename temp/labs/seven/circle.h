#include <iostream>
#include <cstdlib>
#include "Shape.h"

using namespace std;

class Circle : public Shape {

    private:

        float radius;
    public:

        Circle(float, string);

        Circle(const Circle&);

        ~Circle();

        Circle& operator=(const Circle&);

        float get_radius();

        string set_name();

        string set_color();

        void set_radius(float);

        float area() const;



        
};