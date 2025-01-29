/***************************************************
 * Program: Event.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-24-2019
 * 
 * Description: The event class will be a completely virtual class it will not have any variables. but will contain virtual
 *              functions that will allow when any derived class is pointed to the more specific form of these functions will
 *              be run when.
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef EVENT_H
#define EVENT_H


#include <iostream>
#include <cstdlib>
#include "Player.h"
using namespace std;

class Event {


    public:

        virtual ~Event();

        virtual void player_effect(Player& ,int ) = 0;

        virtual char get_symbol() = 0;

        virtual void print_percept() = 0;



};

#endif