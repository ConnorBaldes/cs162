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
#include "Pit.h"

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

Pit::Pit() {

    symbol = '/';

    percept = "You feel a breeze.";

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

Pit::Pit(const Pit& old_Pit) {

    this-> symbol = old_Pit.symbol;

    this-> percept = old_Pit.percept;
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

Pit::~Pit() {}

Pit& Pit::operator=(const Pit& old_Pit) {

    if(this != &old_Pit ) {

        this-> symbol = old_Pit.symbol;

        this-> percept = old_Pit.percept;
        

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

void Pit::player_effect(Player& explorer, int i) {

    cout << "You walked into a bottomless pit and fell to your doom." << endl;

    explorer.set_death(false);

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

char Pit::get_symbol() {

    return symbol;

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

void Pit::print_percept() {

    cout << percept << endl;
}