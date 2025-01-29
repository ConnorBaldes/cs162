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

#include "Player.h"

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

Player::Player() {

    explorer_values.symbol = '*';

    explorer_values.gold = false;

    explorer_values.alive = true;

    explorer_values.arrows = 3;

    explorer_values.x_axis = 0;

    explorer_values.y_axis = 0;

    explorer_values.initial_x_axis = 0;

    explorer_values.initial_y_axis = 0;

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

Player::Player(const Player& old_player) {

    this-> explorer_values.symbol = old_player.explorer_values.symbol;

    this-> explorer_values.gold = old_player.explorer_values.gold;

    this-> explorer_values.alive = old_player.explorer_values.alive;

    this-> explorer_values.arrows = old_player.explorer_values.arrows;

    this-> explorer_values.x_axis = old_player.explorer_values.x_axis;

    this-> explorer_values.y_axis = old_player.explorer_values.y_axis;

    this-> explorer_values.initial_x_axis = old_player.explorer_values.initial_x_axis;

    this-> explorer_values.initial_y_axis = old_player.explorer_values.initial_y_axis;
}

Player::~Player() {

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

Player& Player::operator=(const Player& old_player) {

    if(this != &old_player) {

        this-> explorer_values.symbol = old_player.explorer_values.symbol;

        this-> explorer_values.gold = old_player.explorer_values.gold;

        this-> explorer_values.alive = old_player.explorer_values.alive;

        this-> explorer_values.arrows = old_player.explorer_values.arrows;

        this-> explorer_values.x_axis = old_player.explorer_values.x_axis;

        this-> explorer_values.y_axis = old_player.explorer_values.y_axis;

        this-> explorer_values.initial_x_axis = old_player.explorer_values.initial_x_axis;

        this-> explorer_values.initial_y_axis = old_player.explorer_values.initial_y_axis;

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

player_values Player::get_explorer_values() {

    return explorer_values;

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

void Player::set_position(int x, int y) {

    explorer_values.x_axis = x;

    explorer_values.y_axis = y;

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

void Player::set_position_initial(int x, int y) {

    explorer_values.initial_x_axis = x;

    explorer_values.initial_y_axis = y;



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

void Player::set_death(bool value) {

    explorer_values.alive = value;


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

void Player::set_gold(bool value) {

    explorer_values.gold = value;

}