
//Pizza class cpp file

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include "Pizza.h"

using namespace std;

/************************************************
 *
 * Function: Pizza()
 *
 * Description: construct pizza class sents ingredient pointer to NULL
 *
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: ingredients set to NULL
 *
 * *********************************************/
//copy constructor
//constructor
Pizza::Pizza() {	
	
	ingredients = NULL;
}
/************************************************
 *
 * Function: Pizza(const Pizza &old_pizza)
 *
 * Description: copy constructor copies existing info from a constructor and puts that info into a new constructor	
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string existing pizza object
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
//copy constructor
Pizza::Pizza(const Pizza &old_pizza) {

	this-> name = old_pizza.name;
	
	this-> small_cost = old_pizza.small_cost;
	
	this-> medium_cost = old_pizza.medium_cost;
	
	this-> large_cost = old_pizza.large_cost;
	
	this-> num_ingredients = old_pizza.num_ingredients;
	
	this->  ingredients = new string[num_ingredients];
	
	for(int i = 0; i < num_ingredients; i++) {
	
		this-> ingredients[i] = old_pizza.ingredients[i];
	}
}
/************************************************
 *
 * Function: ~Pizza()
 *
 * Description: pizza destructor		
 *
 * Parameters: 
 
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
//destructor
Pizza::~Pizza() {

	if( ingredients != NULL) {
		
		delete [] ingredients;
		
		ingredients = NULL;
	}
	
}
	
/************************************************
 *
 * Function: Pizza::operator=(const Pizza &old_pizza)
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
//assignment operator overload
Pizza& Pizza::operator=(const Pizza &old_pizza) {
	if(this != &old_pizza) {
		
		if( ingredients != NULL) {
		
			delete [] ingredients;
		
			ingredients = NULL;
		}

		this-> name = old_pizza.name;
	
		this-> small_cost = old_pizza.small_cost;
	
		this-> medium_cost = old_pizza.medium_cost;
	
		this-> large_cost = old_pizza.large_cost;
	
		this-> num_ingredients = old_pizza.num_ingredients;
	
		this-> ingredients = new string[num_ingredients];
	
		for(int i = 0; i < num_ingredients; i++) {
	
			this-> ingredients[i] = old_pizza.ingredients[i];
		}
	}
	return *this;
}	
/************************************************
 *
 * Function: get_name() const
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
//accessor name
string Pizza::get_name() const {
	
	return name;
}
	
	/************************************************
 *
 * Function: get_small_cost() const
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
//accessor small cost
int Pizza::get_small_cost() const {

	return small_cost;
}

/************************************************
 *
 * Function: get_medium_cost() const
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
//accessor medium_cost
int Pizza::get_medium_cost() const {
	
	return medium_cost;
}

/************************************************
 *
 * Function: get_large_cost() const
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
//accessor large_cost
int Pizza::get_large_cost() const {
	
	return large_cost;
}

/************************************************
 *
 * Function: get_num_ingredients() const
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
//accessor number of ingredients
int Pizza::get_num_ingredients() const {
	
	return num_ingredients;
}

/************************************************
 *
 * Function: get_ingredients() const
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
//accessor ingredients
string* Pizza::get_ingredients() const {

	return ingredients;
}

/************************************************
 *
 * Function: set_name(string name)
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
//mutator name
void Pizza::set_name(string name) {

	this ->name = name;
}

/************************************************
 *
 * Function: set_small_cost(int small_cost)
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
//mutator small cost
void Pizza::set_small_cost(int small_cost) {
	
	this ->small_cost = small_cost;
}

/************************************************
 *
 * Function: set_medium_cost(int medium_cost)
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
//mutator medium_cost
void Pizza::set_medium_cost(int medium_cost) {
	
	this ->medium_cost = medium_cost;
}

/************************************************
 *
 * Function: set_large_cost(int)
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
//mutator large_cost
void Pizza::set_large_cost(int) {
	
	this ->large_cost = large_cost;
 }
	
/************************************************
 *
 * Function: set_num_ingredients(int num_ingredients)
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
//mutator number of ingredients
void Pizza::set_num_ingredients(int num_ingredients) {
	
	this-> num_ingredients = num_ingredients;
}

/************************************************
 *
 * Function: set_ingredients(string* ingredients)
 
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
//mutator ingredients
void Pizza::set_ingredients(string* ingredients) {
	
	this -> ingredients = ingredients;
}	

/************************************************
 *
 * Function: set_from_file(ifstream &menu_file)
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
void Pizza::set_from_file(ifstream &menu_file) {

	string temp;
	
	getline(menu_file, temp, ' ');
	name = temp;

	getline(menu_file, temp, ' ');
	small_cost = atoi(temp.c_str());
	
	getline(menu_file, temp, ' ');
	medium_cost = atoi(temp.c_str());
	
	getline(menu_file, temp, ' ');
	
	getline(menu_file, temp, ' ');
	num_ingredients = atoi(temp.c_str());
	
	ingredients = new string[num_ingredients];
	
	for(int i = 0; i < num_ingredients; i++) {
	
		if( i == num_ingredients - 1) {
	
			getline(menu_file, ingredients[i]);
		}
		
		else {

			getline(menu_file, ingredients[i], ' ');
		}
	} 
}

