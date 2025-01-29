/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: function definitions for monkey.h 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/

#include <iostream>
#include <cstdlib>
#include "Monkey.h"

using namespace std;


/************************************************
 *
 * Function: Monkey()
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
Monkey::Monkey() {

    age = 0;

}

/************************************************
 *
 * Function: Monkey(int temp)
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
Monkey::Monkey(int temp) {

    age = temp;

}

/************************************************
 *
 * Function: Monkey(const Monkey& old_Monkey)
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
Monkey::Monkey(const Monkey& old_Monkey) {

    this -> age = old_Monkey.age;


}

/************************************************
 *
 * Function: ~Monkey()
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
Monkey::~Monkey() {


}

/************************************************
 *
 * Function: Monkey::operator=(const Monkey& old_Monkey
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
Monkey& Monkey::operator=(const Monkey& old_Monkey) {

    this -> age = old_Monkey.age;

    return *this;

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
float Monkey::get_revenue() {

    if(age > 5) {

        return (revenue * 2);
    }
    else {

        return revenue;
    }
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
float Monkey::get_cost () const {

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
int Monkey::get_age() {

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
void Monkey::set_age(int i) {

    age += i;

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
float Monkey::get_food_cost(float base_cost)  {

    float monkey_cost = (base_cost * 4);

    return monkey_cost;
}







