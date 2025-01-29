/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This is where the monkey class object is created it holds the monkeys age cost revenu and number of babies 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include <cstdlib>
#include "Animal.h"


using namespace std;



class Monkey : public Animal {

    private:

        const int cost = 15000;

        const int num_babies = 1;

        const int revenue = 1500;

        int age;


    public:

        Monkey();

        Monkey(int);

        Monkey(const Monkey&);

        ~Monkey();

        Monkey& operator=(const Monkey&);

        float get_revenue();

        float get_cost() const;

        int get_age();
        
        void set_age(int); 

        float get_food_cost(float);



};




#endif