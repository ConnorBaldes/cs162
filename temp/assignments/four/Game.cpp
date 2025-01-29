/*******************************
 *Program Filename: ASSIGNMENT_FOUR.cpp
 *
 * Author: Connor Baldes
 *
 * Date: 2-16-2019
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
#include <string>
#include<cstring>
#include <cstdlib>
#include <iomanip>
#include "ncurses.h"
//#include "conio_am.h"
#include <string>
#include "Game.h"
#include "Room.h"
#include "Event.h"
#include "Wumpus.h"
#include "Player.h"
#include "Pit.h"
#include "Bats.h"


using namespace std;
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

Game::Game(int size, bool game_mode) {

    grid = vector<vector<Room>> (size, vector<Room>(size));

    mode = game_mode;

}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

Game::Game(const Game& old_game) {

    this-> explorer = old_game.explorer;

    this-> wumpus = old_game.wumpus;

    this-> bottomless_pit_1 = old_game.bottomless_pit_1;

    this-> bottomless_pit_2 = old_game.bottomless_pit_2;

    this-> super_bats_1 = old_game.super_bats_1;

    this-> super_bats_2 = old_game.super_bats_2;

    this-> gold = old_game.gold;

    this-> grid = old_game.grid;

}

/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

Game& Game::operator=(const Game& old_game) {

    if(this != &old_game) {

    
        this-> explorer = old_game.explorer;

        this-> wumpus = old_game.wumpus;

        this-> bottomless_pit_1 = old_game.bottomless_pit_1;

        this-> bottomless_pit_2 = old_game.bottomless_pit_2;

        this-> super_bats_1 = old_game.super_bats_1;

        this-> super_bats_2 = old_game.super_bats_2;

        this-> gold = old_game.gold;

        this-> grid = old_game.grid;
    }
    return *this;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::print_grid_editor() {

    


    for(int i = 0; i < grid.size(); i++) {

    

       cout << grid_hlines(grid.size()) <<  '\n' << grid_vlines(grid.size()) << '\n'<< grid_vlines(grid.size()) <<  endl;


        for(int j = 0; j < grid.size(); j++) {

            //cout << setw(7) << "| " <<j<< setw(7);
            cout << setw(8) << "|  " << setw(7);
           
            if(j == grid.size()-1) {

                if(grid[i][j].get_player() != NULL) {


                    cout << grid[i][j].get_player()->get_explorer_values().symbol << setw(6) << "|";

                }

                else if(grid[i][j].get_event() != NULL) {

                    cout << grid[i][j].get_event()->get_symbol() << setw(6) << "|";

                }

                else {


                    cout <<setw(7) <<"  " << setw(6) << "|";
                }
                
            }

            else if(grid[i][j].get_player() != NULL) {


                cout << grid[i][j].get_player()->get_explorer_values().symbol;

            }

            else if(grid[i][j].get_event() != NULL) {

                cout << grid[i][j].get_event()->get_symbol();

            }
            else {


                cout << "  ";
            }
            

        }
        
        cout << '\n'<< grid_vlines(grid.size()) << '\n'<< grid_vlines(grid.size()) << '\n' << grid_vlines(grid.size()) << endl;
        
       
    }

    cout << grid_hlines(grid.size()) << '\n' << '\n' << endl;

   
}   

/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::print_grid() {

    


    for(int i = 0; i < grid.size(); i++) {

    

       cout << grid_hlines(grid.size()) <<  '\n' << grid_vlines(grid.size()) << '\n'<< grid_vlines(grid.size()) <<  endl;


        for(int j = 0; j < grid.size(); j++) {

            //cout << setw(7) << "| " <<j<< setw(7);
            cout << setw(8) << "|  " << setw(7);
           
            if(j == grid.size()-1) {

                if(grid[i][j].get_player() != NULL) {


                    cout << grid[i][j].get_player()->get_explorer_values().symbol << setw(6) << "|";

                }

                else if(grid[i][j].get_event() != NULL) {

                    cout << " "<< setw(6) << "|";

                }

                else {


                    cout <<setw(7) <<"  " << setw(6) << "|";
                }
                
            }

            else if(grid[i][j].get_player() != NULL) {


                cout << grid[i][j].get_player()->get_explorer_values().symbol;

            }

            else if(grid[i][j].get_event() != NULL) {

                cout << " ";

            }
            else {


                cout << "  ";
            }
            

        }
        
        cout << '\n'<< grid_vlines(grid.size()) << '\n'<< grid_vlines(grid.size()) << '\n' << grid_vlines(grid.size()) << endl;
        
       
    }

    cout << grid_hlines(grid.size()) << '\n' << '\n' << endl;

   
}   


/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/


string Game::get_input() {

    char base_input;

    char arrow_direction;

    string final_input;


    base_input = get_input_move();

    final_input = base_input;

    if( base_input == ' ') {

        cout << "Your arrow is ready what direction would you like to enter it: ";
        char ch=0;

        bool try_again;

        do {
            try_again = false;
            ch = getch();

            switch(ch) {
               case 'W':
                case 'w':
                    break;
                case 'A':
                case 'a':
                    break;
                case 's':
                case 'S':
                    break;
                case 'D':
                case 'd':
                    break;

                default:
                    cout << "Invalid input try again." << endl;
                    try_again = true;
                }

            }while(try_again);

            final_input += ch;
    }
    return final_input;
} 
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

char Game::get_input_move() {

    char ch=0;

    bool try_again = false;

    do {
        ch = getch();

        switch(ch)
        {
            case 'W':
            case 'w':
                try_again = false;
                break;
            case 'A':
            case 'a':
                try_again = false;
                break;
            case 's':
            case 'S':
                try_again = false;
                break;
            case 'D':
            case 'd':
                try_again = false;
                break;
            case ' ':
                try_again = false;
                break;

            default:
                cout << "Invalid input try again." << endl;
                try_again = true;

        }
        cout << ch << endl;

    }while (try_again == true);

    return ch;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

string Game::grid_hlines(int size) {

    string line = "     ";

    for(int i = 0; i < size+1; i++) {

        if(i == size) {

            line += "-------";
            
        }
        else {
            line += "--------------";
        }
        
    }
    return line;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

string Game::grid_vlines(int size) {

    string line = "     |";

    for(int i = 0; i < size; i++) {

        line += "              |" ;

        
    }

return line;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::fill_board() {

    
    
    int x; 

    int y; 

    int rand_obj;

    int explorer_int = 1;

    int wumpus_int = 1;

    int bottomless_pit_1_int = 1;

    int bottomless_pit_2_int = 1;

    int super_bats_1_int = 1;

    int super_bats_2_int = 1;

    int gold_int = 1;

    int count = 7;


   while( count > 0) {

       rand_obj = rand() % 7;


       x = rand() % grid.size();

       y = rand() % grid.size();

        //cout << count<< endl;

       if(rand_obj == 0 && grid[x][y].get_event() == NULL && grid[x][y].get_player() == NULL&& wumpus_int != 0) {

           grid[x][y].set_event(wumpus);

           wumpus_int = 0;

           count -= 1;

       }

       else if(rand_obj == 1 && grid[x][y].get_event() == NULL && grid[x][y].get_player() == NULL&& bottomless_pit_1_int != 0) {

           grid[x][y].set_event(bottomless_pit_1);

            bottomless_pit_1_int = 0;

           count -=1;

       }
    
       else if(rand_obj == 2 && grid[x][y].get_event() == NULL && grid[x][y].get_player() == NULL  && bottomless_pit_2_int != 0) {

           grid[x][y].set_event(bottomless_pit_2);

           bottomless_pit_2_int = 0;

           count -=1;

       }

       else if(rand_obj == 3 && grid[x][y].get_event() == NULL&& grid[x][y].get_player() == NULL && super_bats_1_int != 0) {

           grid[x][y].set_event(super_bats_1);

           super_bats_1_int = 0;

           count -=1;

       }

       else if(rand_obj == 4 && grid[x][y].get_event() == NULL && grid[x][y].get_player() == NULL && super_bats_2_int != 0) {

           grid[x][y].set_event(super_bats_2);

           super_bats_2_int = 0;

           count-=1;

       }

       else if(rand_obj == 5 && grid[x][y].get_event() == NULL && grid[x][y].get_player() == NULL && gold_int != 0) {

           grid[x][y].set_event(gold);

           gold_int = 0;

           count -=1;

       }

       else if(rand_obj == 6 && grid[x][y].get_event() == NULL && explorer_int != 0) {

           grid[x][y].set_player(explorer);

           explorer.set_position(x,y);

           explorer.set_position_initial(x,y);

           explorer_int = 0;

           count -=1;

       }

   }


}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/


void Game::move_north(){

    int x = explorer.get_explorer_values().x_axis;
    int y = explorer.get_explorer_values().y_axis;

    if(x-1 >=0  && y < grid.size()){

        if(grid[x-1][y].get_player() == NULL) {

            grid[x-1][y].set_player(explorer);

            explorer.set_position(x-1, y);

            grid[x][y].set_player_null();

        }
        else {

            cout << "Move not available." << endl;
        }
    
    }
    else {

        cout << "Move not available." << endl;
    }

    

}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::move_south(){



    int x = explorer.get_explorer_values().x_axis;
    int y = explorer.get_explorer_values().y_axis;

    if(x+1 < grid.size() && y < grid.size()){

        if(grid[x+1][y].get_player() == NULL) {

            grid[x+1][y].set_player(explorer);

            explorer.set_position(x+1, y);

            grid[x][y].set_player_null();

        }
        else {

            cout << "Move not available." << endl;
        }
    
    }
    else {

        cout << "Move not available." << endl;
    }


}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::move_east(){


    int x = explorer.get_explorer_values().x_axis;
    int y = explorer.get_explorer_values().y_axis;

    if(x < grid.size() && y-1 >=0){

        if(grid[x][y-1].get_player() == NULL) {

            grid[x][y-1].set_player(explorer);

            explorer.set_position(x, y-1);

            grid[x][y].set_player_null();

        }
        else {

            cout << "Move not available." << endl;
        }
    
    }
    else {

        cout << "Move not available." << endl;
    }


}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::move_west(){

 
    int x = explorer.get_explorer_values().x_axis;
    int y = explorer.get_explorer_values().y_axis;

    if(x < grid.size() && y+1 < grid.size()){

        if(grid[x][y+1].get_player() == NULL) {

            grid[x][y+1].set_player(explorer);

            explorer.set_position(x, y+1);

            grid[x][y].set_player_null();

        }
        else {

            cout << "Move not available." << endl;
        }
    
    }
    else {

        cout << "Move not available." << endl;
    }


}

/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::player_move() {

   char input = get_input_move();


   if(input =='W' || input == 'w') {

       move_north();

   }

   else if(input =='S' || input == 's') {

       move_south();

   }

   else if(input =='A' || input == 'a') {

       move_east();

   }

   else if(input =='D' || input == 'd') {

       move_west();

   }




}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game:: check_percepts() {

    if((explorer.get_explorer_values().x_axis)+1 < grid.size()) {
        if(grid[(explorer.get_explorer_values().x_axis)+1][(explorer.get_explorer_values().y_axis)].get_event() != NULL) {

            grid[(explorer.get_explorer_values().x_axis)+1][(explorer.get_explorer_values().y_axis)].get_event()->print_percept();

        }
    }
    if((explorer.get_explorer_values().x_axis)-1 >= 0) {

        if(grid[(explorer.get_explorer_values().x_axis)-1][(explorer.get_explorer_values().y_axis)].get_event() != NULL) {

            grid[(explorer.get_explorer_values().x_axis)-1][(explorer.get_explorer_values().y_axis)].get_event()->print_percept();

        }
    }
    if((explorer.get_explorer_values().y_axis)+1 < grid.size()) {   
        if(grid[(explorer.get_explorer_values().x_axis)][(explorer.get_explorer_values().y_axis)+1].get_event() != NULL) {

            grid[(explorer.get_explorer_values().x_axis)][(explorer.get_explorer_values().y_axis)+1].get_event()->print_percept();

        }
    }
    if((explorer.get_explorer_values().x_axis)-1 >= 0) {
        if(grid[(explorer.get_explorer_values().x_axis)][(explorer.get_explorer_values().y_axis)-1].get_event() != NULL) {


            grid[(explorer.get_explorer_values().x_axis)][(explorer.get_explorer_values().y_axis)-1].get_event()->print_percept();

        }
    }

}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game::check_events() {


    int x = explorer.get_explorer_values().x_axis;
    int y = explorer.get_explorer_values().y_axis;

    if(grid[explorer.get_explorer_values().x_axis][explorer.get_explorer_values().y_axis].get_event() != NULL) {

        grid[explorer.get_explorer_values().x_axis][explorer.get_explorer_values().y_axis].get_event()->player_effect(explorer, grid.size());
        
        if(grid[explorer.get_explorer_values().x_axis][explorer.get_explorer_values().y_axis].get_event() == &super_bats_1 || grid[explorer.get_explorer_values().x_axis][explorer.get_explorer_values().y_axis].get_event() == &super_bats_2 ) {

            grid[x][y].delete_player_pointer();

            random_placement(x,y);
        }
    }

}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void Game:: random_placement(int old_x, int old_y){

    grid[explorer.get_explorer_values().x_axis][explorer.get_explorer_values().y_axis].set_player(explorer);

    

}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

vector<vector<Room>>& Game::get_grid() {


    return grid;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

Player& Game:: get_explorer() {

    return explorer;
}
/************************************************
 *  
 * Function: get_car_back()
 *    
 * Description: Using the type of car that the user input, and that cars correspinding rental fee, and gas fee the function adds the total of those two things to 
 * 		total expenses. The function then uses the type of car  the user chose to add rental fee and gas fee to reinbursment amount by using the information
 * 		the company gives for reinbursment. 
 *         
 * Parameters: trip days, car type, rental fee, gas fee, miles driven, total expense, total reinbursment
 *    
 * Pre-Conditions: trip days greater than 0
 * 		   car type between 1 and 4
 * 		   rental fee greater than 0
 * 		   gas fee greater than 0
 * 		   miles driven greater than 0
 *
 *             
 * Post-Conditions: rental fee and gas fee added to total expense
 * 		    calculation for amount to be reinbursed added to total reinbursment
 *                
*********************************************/

void menu() {
    cout << '\n' << endl;
    cout << "Hunt the Wumpus is a game set inside the cave of the Wumpus, a scary, gold-hoarding monster who likes to eat people who disturb its sleep." << endl; 
    cout << "The player's goal is to guide an adventurer to kill the Wumpus, find its hidden gold, and escape alive. The Wumpus lives in a large cave of rooms arranged" << endl;
    cout <<"in a grid, where each room has four tunnels leading to the rooms to the north, east, south, and west." << endl;

    cout << "The adventurer starts the game in a random empty room in the Wumpus’ cave. Her starting position is also the location of the escape rope that she must use to " << endl;
    cout << "escape after she's completed her task." << endl;
    cout << '\n' << endl;
}
