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

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cstdlib>
using namespace std;


struct player_values {

    char symbol;

    bool gold;

    bool alive;

    int arrows;

    int x_axis;

    int y_axis;

    int initial_x_axis;

    int initial_y_axis;



};

class Player {

    private:

        player_values explorer_values;


    public:

    Player();

    Player(const Player&);

    ~Player();

    Player& operator=(const Player&);

    player_values get_explorer_values();

    void set_position(int, int);

    void set_position_initial(int, int);

    void set_death(bool);

    void set_gold(bool);





        





};





#endif