
/*******************************
 *Program Filename: ASSIGNMENT_FOUR.cpp
 *
 * Author: Connor Baldes
 *
 * Date: 5-26-2019
 *
 * Description: This program allows a user to create a business trip expense report. The program will first prompt the user for the number of days spent on 
 * 		the trip, then will ask the departure time on the first day of the trip and departure time on the last day. Then will ask amount that the 
 * 		airfare was, then if there were any conference or seminar registration fees, then if they rented a car or took a taxi, the hotel expense
 * 		for each day, and finally the amount they spent on meals each day. The program will use that inforation to calculate the amount that the
 * 		person who went on the trip will be reimbursed for that trip. Also the total amount spent on the trip. 
 *
 * Input: Days spent on trip, departure time first day arrival time last day, airfare amount, car rented or taxi taken, hotel expense, meal expense
 *
 * Output: Total Reinbursement amount, Total amount spent 
 *
 * ******************************/

#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <string>
#include "ncurses.h"
#include "Game.h"
#include "Room.h"
#include "Event.h"
#include "Room.h"
#include "Wumpus.h"
#include "Player.h"
#include "Pit.h"
#include "Bats.h"


using namespace std;

bool check_command(char**);


int main(int argc, char* argv[] ) {

   
    
    srand(time(NULL));
    bool mode;

    int size = atoi(argv[1]);

    mode = check_command(argv);

    bool go_again = true;


    Game Hunt_Wumpus(size, mode);

    Hunt_Wumpus.fill_board();
     

    if(mode == true){
        initscr();
        //cbreak();
        //raw();
        cout << "Editor Mode" << endl;
        menu();
       
        cin.clear();
        do{
       
            
            Hunt_Wumpus.print_grid_editor();
            

            Hunt_Wumpus.player_move();
            refresh();
            Hunt_Wumpus.check_percepts();
           
            Hunt_Wumpus.check_events();           

            if(Hunt_Wumpus.get_explorer().get_explorer_values().alive == false) {
                
                cout << "You lose." << endl;
                go_again = false;
                break;
            }
            refresh();
            Hunt_Wumpus.check_percepts();
            refresh();

        endwin();
        }while(go_again);
    }

    else if(mode == false) {
        initscr();
        //cbreak();
        //raw();
        cout << "Game mode" << endl;
        menu();
        do{
       
           
            Hunt_Wumpus.print_grid();

            Hunt_Wumpus.player_move();

            Hunt_Wumpus.check_events();

            Hunt_Wumpus.check_percepts();

            if(Hunt_Wumpus.get_explorer().get_explorer_values().alive == false) {
                
                cout << "You lose." << endl;
                go_again = false;
                break;
            }

            



            endwin();
        }while(go_again);


    }

    return 0;
    

}


bool check_command(char* argv[]) {

    for(int i = 0; i < strlen(argv[2]); i++) {

        if(argv[2][i] == 't' || argv[2][i] == 'T') {

            if(argv[2][i+1] == 'r') {

                if(argv[2][i+2] == 'u') {

                    if(argv[2][i+3] == 'e') {

                        return true;
                    }
                }
            }
        }
        else {
            return false;
        }

    }
}




