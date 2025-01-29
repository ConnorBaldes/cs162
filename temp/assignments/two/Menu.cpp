#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include "Pizza.h"
#include "Menu.h"

using namespace std;
/************************************************
 *
 * Function: Menu()
 *
 * Description: menu constructor		
 *
 * Parameters:
 
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
Menu::Menu() {
	
	num_pizzas = 0;
	
	pizzas = NULL;
	
}

/************************************************
 *
 * Function: Menu(const Menu &old_menu)
 *
 * Description: copies existing menu		
 *
 * Parameters: existing menu
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
Menu::Menu(const Menu &old_menu) {
	
	this ->num_pizzas = old_menu.num_pizzas;
	
	this ->pizzas = new Pizza[num_pizzas];
	
	for(int i = 0; i < num_pizzas; i++) {
		
		pizzas[i] = old_menu.pizzas[i];
	}
}


/************************************************
 *
 * Function: ~Menu()
 *
 * Description: menu destructor
 *
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/	
Menu::~Menu() {
	
	if(pizzas != NULL) {
		
		delete [] pizzas;
		
		pizzas = NULL;
	}
	
}

/************************************************
 *
 * Function: Menu::operator=(const Menu &old_menu)
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
Menu& Menu::operator=(const Menu &old_menu) {
	 
	if(this != &old_menu) {
		if(pizzas != NULL) {
		
			delete [] pizzas;
		
			pizzas = NULL;
		}
	
		this ->num_pizzas = old_menu.num_pizzas;
	
		this ->pizzas = new Pizza[num_pizzas];
	
		for(int i = 0; i < num_pizzas; i++) {
		
			pizzas[i] = old_menu.pizzas[i];
		}
	}
	return *this;
}

/************************************************
 *
 * Function: get_num_pizzas() const
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
int Menu::get_num_pizzas() const {
	
	return num_pizzas;
}

/************************************************
 *
 * Function: get_pizzas() const
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
Pizza* Menu::get_pizzas() const {

	return pizzas;
}

/************************************************
 *
 * Function: set_num_pizzas(int num)
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
void Menu::set_num_pizzas(int num) {
	
	this -> num_pizzas = num;
}

/************************************************
 *
 * Function: set_pizzas(Pizza* new_pizzas)
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
void Menu::set_pizzas(Pizza* new_pizzas) {

	this ->pizzas = new_pizzas;
}
	
/************************************************
 *
 * Function: search_pizza_by_cost(int upper_bound)
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
Menu Menu::search_pizza_by_cost(int upper_bound) {
	
	Menu temp = *this;
	
	for(int i = 0; i < temp.get_num_pizzas(); i++) {
		
		if(temp.pizzas[i].get_small_cost() > upper_bound) {
			
			temp.pizzas[i].set_small_cost(-1);
		}
		else if(temp.pizzas[i].get_medium_cost() > upper_bound) {
			
			temp.pizzas[i].set_medium_cost(-1);
		}
		else if(temp.pizzas[i].get_large_cost() > upper_bound) {
			
			temp.pizzas[i].set_large_cost(-1);
		}
	}
	return temp;
}

/************************************************
 *
 * Function: search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients_search)
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
Menu Menu::search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients_search) {
	
	Menu temp_include = *this;
	
	int count;
	
	for(int i = 0; i < num_pizzas; i++) {
		
		count = 0;
		
		for(int j = 0; j < num_ingredients_search; j++) {
			
			for( int z = 0; z < pizzas[i].get_num_ingredients(); z++) {
				
				if( strcmp(ingredients[j].c_str(), pizzas[i].get_ingredients()[z].c_str()) == 0) {
					
					count += 1;
				}
			}
		}
		if(!(count == num_ingredients_search)) {
			
			temp_include.remove_from_menu(i);
		}
	}
	return temp_include;
}
	
/************************************************
 *
 * Function: search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients_search)
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
Menu Menu::search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients_search) {
	
	Menu temp_exclude = *this;
	
	int count;
	
	for(int i = 0; i < num_pizzas; i++) {
		
		count = 0;
		
		for(int j = 0; j < num_ingredients_search; j++) {
			
			for( int z = 0; z < pizzas[i].get_num_ingredients(); z++) {
				
				if( strcmp(ingredients[j].c_str(), pizzas[i].get_ingredients()[z].c_str()) == 0) {
					
					count += 1;
				}
			}
		}
		if(!(count > 0)) {
			
			temp_exclude.remove_from_menu(i);
		}
	}
	return temp_exclude;
}
	
/************************************************
 *
 * Function: add_to_menu(Pizza pizza_to_add)
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
void Menu::add_to_menu(Pizza pizza_to_add) {
		
	Menu temp = *this;
	
	temp.set_num_pizzas(num_pizzas + 1);
	
	Pizza* new_pizzas = new Pizza[temp.get_num_pizzas()];
	
	for(int i = 0; i < num_pizzas; i++) {
		
		new_pizzas[i] = pizzas[i];
	}
	new_pizzas[temp.get_num_pizzas()-1] = pizza_to_add;
	temp.pizzas = new_pizzas;
	
	
	*this = temp;
	
}


/************************************************
 *
 * Function: set_values_from_file(ifstream& menu_file)
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
void Menu::set_values_from_file(ifstream& menu_file) {
	
	int count = 0;
	
	string temp;
	
	while(!(menu_file.eof())) {
		
		getline(menu_file, temp);
		
		count += 1;
	}
	menu_file.seekg(0);
	num_pizzas = count;
	pizzas = new Pizza[num_pizzas];
	
	for(int i = 0; i < num_pizzas; i++) {
		
		pizzas[i].set_from_file(menu_file);
		
	}
}


/************************************************
 *
 * Function: remove_from_menu(int index) 
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
void Menu::remove_from_menu(int index) {
	
	num_pizzas --;
	
	for(int i = index; i < num_pizzas; i++) {
		
		pizzas[i] = pizzas[i+1];
	}
}