/***************************************************
 * Program: Game.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-24-2019
 * 
 * Description: The game class will hold the hunting the wumpus game functions. It will include instances of the person, wumpus,
 *              super bat, pit, and gold objects. it will also hold a 2d vector array that will hold instances of the room class.
 *              The games functions will be performed in this class, such as if a player is to die the game object will end the game
 *              the game class will also have functions to move object instances into differnt rooms, get movement input from the 
 *              user and reset the screem after every room
 * 
 * Input: command line arguments on size of 2d vector array, boolean value on wether or not to be in editor mode
 * 
 * Output: grid showing game, percepts, relevant game info
 * 
 ***************************************************/


#ifndef GAME_H
#define GAME_H

#include <iostream> 
#include <cstdlib>
#include <vector>
#include <ctime>
//#include "conio_am.h"
#include "Room.h"
#include "Event.h"
#include "Room.h"
#include "Wumpus.h"
#include "Player.h"
#include "Pit.h"
#include "Bats.h"
#include "Gold.h"


using namespace std;

class Game {

    private:

        Player explorer;

        Wumpus wumpus;

        Pit bottomless_pit_1;

        Pit bottomless_pit_2;

        Bats super_bats_1;

        Bats super_bats_2;

        Gold gold;

        vector<vector<Room>> grid;

        bool mode;


    public:

        Game(int, bool);

        Game(const Game&);

      

        Game& operator=(const Game&);

        Player& get_explorer();

        string get_input();

        char get_input_move();

        void print_grid();

        void print_grid_editor();

        string grid_hlines(int);

        string grid_vlines(int);

        void fill_board();

        void move_north();

        void move_south();

        void move_east();

        void move_west();

        void player_move();

        void clear_screen();

        void check_percepts();

        void check_events();

        bool check_death();

        void check_win();

        void random_placement(int, int);

        vector<vector<Room>>& get_grid();

};

void menu();

#endif