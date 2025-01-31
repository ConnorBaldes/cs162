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

#ifndef ROOM_H
#define ROOM_H
#include <vector>
#include "Event.h"
#include "Player.h"

using namespace std;

class Room {

    private:

        Event* room_event;

        Player* explorer;


        


    public:

        Room();

        Room(const Room&);

        ~Room();

        Room& operator=(const Room&);

        Event* get_event();

        Player* get_player();

        void set_event(Event&);

        void set_player(Player&);

        void set_player_null();

        void delete_player_pointer();
        
};


#endif