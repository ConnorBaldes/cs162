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

#ifndef BATS_H
#define BATS_H

#include <iostream>
#include <cstdlib>
#include "Event.h"


using namespace std;


class Bats: public Event {

  
    private:

        char symbol;

        string percept;

    public:


    Bats();

    Bats(const Bats&);

    ~Bats();

    Bats& operator=(const Bats&);

    virtual void player_effect(Player&, int) override;

    char get_symbol() override;

    void print_percept() override;

};

#endif