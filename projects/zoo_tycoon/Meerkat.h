/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This is where the meerkat object is created 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef MEERKAT_H
#define MEERKAT_H

#include <iostream>
#include <cstdlib>
#include "Animal.h"


using namespace std;

class Meerkat : public Animal {

    private:

        const int cost = 500;

        const int num_babies = 5;

        const int revenue = 25;

        int age;


    public:

        Meerkat();

        Meerkat(const Meerkat&);

        ~Meerkat();

        Meerkat& operator=(const Meerkat&);

        float get_cost() const;

        int get_age();
        
        void set_age(int); 

        float get_revenue();

        float get_food_cost(float);


};



#endif