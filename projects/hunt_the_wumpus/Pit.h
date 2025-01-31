/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: function defs for meerkat.h 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/

#ifndef PIT_H
#define PIT_H

#include <iostream>
#include <cstdlib>
#include "Event.h"


using namespace std;


class Pit: public Event {

    
    private:

        char symbol;

        string percept;

    public:


    Pit();

    Pit(const Pit&);

    ~Pit();

    Pit& operator=(const Pit&);


    void player_effect(Player&, int) override;

    char get_symbol() override;

    void print_percept() override;


};

#endif