#include <iostream>
#include <cstdlib>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {

    private:

        float width;
        float height;

    public:

        Rectangle(int, int, string);

        Rectangle(const Rectangle&);

        ~Rectangle();

        Rectangle& operator=(const Rectangle&);

        float get_width();

        float get_height();

        string set_name();

        string set_color();

        void set_width(float);

        void set_height(float);

        void set_name(string);

        void set_color(string);

        float area() const;

        
};