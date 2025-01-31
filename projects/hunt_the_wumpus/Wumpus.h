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

#ifndef WUMPUS_H
#define WUMPUS_H

#include <iostream>
#include <cstdlib>
#include "Event.h"


using namespace std;


class Wumpus: public Event {


    private:

        char symbol;

        string percept;


    public:


    Wumpus();

    Wumpus(const Wumpus&);

    ~Wumpus();

    Wumpus& operator=(const Wumpus&);


    void player_effect(Player&, int) override;

    char get_symbol() override;

    void print_percept() override;




    

};

#endif