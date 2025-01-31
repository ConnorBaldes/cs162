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

#ifndef GOLD_H
#define GOLD_H

#include <iostream>
#include <cstdlib>
#include "Event.h"


using namespace std;


class Gold: public Event {

    
    private:

        char symbol;

        string percept;

    public:


    Gold();

    Gold(const Gold&);

    ~Gold();

    Gold& operator=(const Gold&);

    void player_effect(Player&, int) override;

    char get_symbol() override;

    void print_percept() override;

};

#endif