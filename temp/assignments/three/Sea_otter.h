/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This is where the sea otter object is created 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef SEA_OTTER_H
#define SEA_OTTER_H

#include <iostream>
#include <cstdlib>
#include"Animal.h"

using namespace std;

class Sea_otter : public Animal {

    private:

        const int cost = 5000;

        const int num_babies = 2;

        const int revenue = 250;

        int age;


    public:

        Sea_otter();

        Sea_otter(const Sea_otter&);

        ~Sea_otter();

        Sea_otter& operator=(const Sea_otter&);

        float get_cost() const;

        int get_age();
        
        void set_age(int); 

        float get_revenue();

        float get_food_cost(float);


};



#endif