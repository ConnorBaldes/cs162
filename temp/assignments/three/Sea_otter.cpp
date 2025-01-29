/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: function defs for sea_otter.h 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/

#include <iostream>
#include <cstdlib>
#include "Sea_otter.h"

using namespace std;
/************************************************
 *
 * Function: Sea_otter()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Sea_otter::Sea_otter() {

    age = 0;

}
/************************************************
 *
 * Function: Sea_otter(const Sea_otter& old_Sea_otter)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Sea_otter::Sea_otter(const Sea_otter& old_Sea_otter) {

    this -> age = old_Sea_otter.age;


}
/************************************************
 *
 * Function: ~Sea_otter()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Sea_otter::~Sea_otter() {


}
/************************************************
 *
 * Function: Sea_otter::operator=(const Sea_otter& old_Sea_otter)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Sea_otter& Sea_otter::operator=(const Sea_otter& old_Sea_otter) {

    this -> age = old_Sea_otter.age;

    return *this;

}
/************************************************
 *
 * Function: get_cost () const
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Sea_otter::get_cost () const {

    return cost;
}
/************************************************
 *
 * Function: get_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Sea_otter::get_age() {

    return age;
}
/************************************************
 *
 * Function: set_age(int i)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Sea_otter::set_age(int i) {

    age += i;

}
/************************************************
 *
 * Function: get_revenue()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Sea_otter::get_revenue() {

    if(age > 5) {

        return (revenue * 2);
    }
    else {

        return revenue;
    }
}
/************************************************
 *
 * Function: get_food_cost(float base_cost)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Sea_otter::get_food_cost(float base_cost)  {

    float sea_otter_cost = (base_cost * 2);

    return sea_otter_cost;
}
