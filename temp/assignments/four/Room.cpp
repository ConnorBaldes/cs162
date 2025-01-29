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

#include "Room.h"

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

Room::Room() {

    room_event = NULL;

    explorer = NULL;


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

Room::Room(const Room& old_room) {

    this->room_event = old_room.room_event;

    this-> explorer = old_room.explorer;

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

Room::~Room() {

    if(room_event != NULL) {

        //delete room_event;

        room_event = NULL;
    }

    if(explorer != NULL) {

        //delete explorer;

        explorer = NULL;
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

Room& Room::operator=(const Room& old_room) {

    if(this != &old_room) {


        if(room_event != NULL) {

            //delete room_event;

            room_event = NULL;
        }

        if(explorer != NULL) {

            //delete explorer;

            explorer = NULL;
        }

        this-> room_event = old_room.room_event;

        this-> explorer = old_room.explorer;
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

Event* Room::get_event() {

    return room_event;
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

Player* Room::get_player() {

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

void Room::set_event(Event& event_ref) {

    room_event = &event_ref;

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

void Room::set_player(Player& player_ref) {

    explorer = &player_ref;
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

void Room::set_player_null() {

    explorer = NULL;
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

void Room::delete_player_pointer() {

       if(explorer != NULL) {

        //delete explorer;

        explorer = NULL;
        }
}

