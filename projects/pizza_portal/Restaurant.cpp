#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include "Pizza.h"
#include "Menu.h"
#include "Restaurant.h"
#include "Structs.h"

using namespace std;
/************************************************
 *
 * Function: Restaurant()
 *
 * Description: Restaurant constructor		
 *
 * Parameters:
 *
 * Pre-Conditions: 
 *
 * Post-Conditions:  
 *
 * *********************************************/
Restaurant::Restaurant() {
	
	employees = NULL;
	
	week = NULL;
	
}

/************************************************
 *
 * Function: Restaurant(const Restaurant& old_Restaurant)
 *
 * Description: copies existing constructor		
 *
 * Parameters: existing constructor
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/	
Restaurant::Restaurant(const Restaurant& old_Restaurant) {
	
	this-> menu = old_Restaurant.menu;
	
	this-> name = old_Restaurant.name;
	
	this-> phone = old_Restaurant.phone;
	
	this-> address = old_Restaurant.address;
	
	this-> num_employees = old_Restaurant.num_employees;
	
	this->  employees = new employee[num_employees];
	
	this-> week = new hours[7];
	
	for(int i = 0; i < num_employees; i++) {
	
		this-> employees[i].id = old_Restaurant.employees[i].id;
		
		this-> employees[i].password = old_Restaurant.employees[i].password;
		
		this-> employees[i].first_name = old_Restaurant.employees[i].first_name;
		
		this-> employees[i].last_name = old_Restaurant.employees[i].last_name;
	}
	for(int i = 0; i < 7; i++) {
		
		this -> week[i].day = old_Restaurant.week[i].day;
		
		this -> week[i].open_hour = old_Restaurant.week[i].open_hour;
		
		this -> week[i].close_hour = old_Restaurant.week[i].close_hour;
	}
}	
	
/************************************************
 *
 * Function: ~Restaurant()
 
 * Description: restaurant destructor 	
 *
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/	
Restaurant::~Restaurant() {

	if(employees != NULL) {
		
		delete [] employees;
		
		employees = NULL;
	}
	if(week != NULL) {
		
		delete [] week;
		
		week = NULL;
	}
	
}
	
/************************************************
 *
 * Function: Restaurant::operator=(const Restaurant& old_Restaurant)
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
Restaurant& Restaurant::operator=(const Restaurant& old_Restaurant) {
	
	if(this != &old_Restaurant) {
		
		if(employees != NULL) {
		
			delete [] employees;
		
			employees = NULL;
		}
		if(week != NULL) {
		
			delete [] week;
		
			week = NULL;
		}
	
		this-> menu = old_Restaurant.menu;
	
		this-> name = old_Restaurant.name;
	
		this-> phone = old_Restaurant.phone;
	
		this-> address = old_Restaurant.address;
	
		this-> num_employees = old_Restaurant.num_employees;
	
		this->  employees = new employee[num_employees];
	
		this-> week = new hours[7];
	
		for(int i = 0; i < num_employees; i++) {
	
			this-> employees[i].id = old_Restaurant.employees[i].id;
		
			this-> employees[i].password = old_Restaurant.employees[i].password;
		
			this-> employees[i].first_name = old_Restaurant.employees[i].first_name;
		
			this-> employees[i].last_name = old_Restaurant.employees[i].last_name;
		}
		for(int i = 0; i < 7; i++) {
		
			this -> week[i].day = old_Restaurant.week[i].day;
		
			this -> week[i].open_hour = old_Restaurant.week[i].open_hour;
		
			this -> week[i].close_hour = old_Restaurant.week[i].close_hour;
		}
	}
	return *this;
}

/************************************************
 *
 * Function: get_menu() const
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
Menu Restaurant::get_menu() const {
	
	return menu;
}

/************************************************
 *
 * Function: get_employees() const 
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
employee* Restaurant::get_employees() const {
	
	return employees;
}

/************************************************
 *
 * Function: get_week() const
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
hours* Restaurant::get_week() const {
	
	return week;
}

/************************************************
 *
 * Function: get_num_employees() const
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
int Restaurant::get_num_employees() const {

	return num_employees;
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
string Restaurant::get_name() const {
	
	return name;
}
	
/************************************************
 *
 * Function: get_phone() const
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
string Restaurant::get_phone() const {
	
	return phone;
}

/************************************************
 *
 * Function: get_address() const
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
string Restaurant::get_address() const {
	
	return address;
}

/************************************************
 *
 * Function: set_menu(Menu new_menu)
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
void Restaurant::set_menu(Menu new_menu) {
	
	this -> menu = new_menu;
}

/************************************************
 *
 * Function: set_employees(employee* new_employees)
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
void Restaurant::set_employees(employee* new_employees) {
	
	this -> employees = new_employees;
}

/************************************************
 *
 * Function: set_num_employees_from_file(ifstream &employee_file)
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
void Restaurant::set_num_employees_from_file(ifstream &employee_file) {
	
	int count = 0;
	
	string temp;
	
	while(!(employee_file.eof())) {
		
		getline(employee_file, temp);
		
		count += 1;
	}
	employee_file.seekg(0);
	num_employees = count;
}

/************************************************
 *
 * Function: set_employees_from_file(ifstream& employee_file)
 
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
void Restaurant::set_employees_from_file(ifstream& employee_file) {
	
	set_num_employees_from_file(employee_file);
	
	string temp;
	
	employees = new employee[num_employees];
	
	for(int i = 0; i < num_employees; i++) {
		
		getline(employee_file, temp, ' ');
		employees[i].id = atoi(temp.c_str());
		
		getline(employee_file, temp, ' ');
		employees[i].password = temp;

		getline(employee_file, temp, ' ');
		employees[i].first_name = temp;

		getline(employee_file, temp);
		employees[i].last_name = temp;
	}
}

/************************************************
 *
 * Function: set_restaurant_info_from_file(ifstream& restaurant_info_file) 
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
void Restaurant::set_restaurant_info_from_file(ifstream& restaurant_info_file) {
	
	
	string temp;
	
	getline(restaurant_info_file, temp);
	name = temp;
	
	getline(restaurant_info_file, temp);
	phone = temp;
	
	getline(restaurant_info_file, temp);
	address = temp;
	
	
	week = new hours[7];
	
	for(int i = 0; i < 7; i++) {
		
		getline(restaurant_info_file, temp, ' ');
		week[i].day = temp;
		
		getline(restaurant_info_file, temp, ' ');
		week[i].open_hour = temp;

		getline(restaurant_info_file, temp);
		week[i].close_hour= temp;
	}
}	
	
/************************************************
 *
 * Function: set_week(hours* new_week)
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
void Restaurant::set_week(hours* new_week) {
	
	this -> week = new_week;
}
	
/************************************************
 *
 * Function: set_name(string new_name)
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
void Restaurant::set_name(string new_name) {
	
	this -> name = new_name;
}

/************************************************
 *
 * Function: set_phone(string new_phone)
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
void Restaurant::set_phone(string new_phone) {
	
	this -> phone = new_phone;
}

/************************************************
 *
 * Function: set_address(string new_address) 
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
void Restaurant::set_address(string new_address) {
	
	this -> address = new_address;
}

/************************************************
 *
 * Function: load_data(ifstream& menu_file, ifstream& employee_file, ifstream& restaurant_info_file)
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
void Restaurant::load_data(ifstream& menu_file, ifstream& employee_file, ifstream& restaurant_info_file) {	//reads from files to correctly populate menu, employees, hours, etc.
	
	menu.set_values_from_file(menu_file);
	
	set_employees_from_file(employee_file);
	
	set_restaurant_info_from_file(restaurant_info_file);
}
	
	
/************************************************
 *
 * Function: login(int id, string password)
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
bool Restaurant::login(int id, string password) {
	
	for(int i = 0; i < num_employees; i++) {
		
		if( employees[i].id == id && strcmp(employees[i].password.c_str(), password.c_str()) == 0) {
			
			return true;
		}
	}
	return false;
}

/************************************************
 *
 * Function: view_menu()
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
void Restaurant::view_menu() {
	
	Menu temp_menu = get_menu();
	
	Pizza* temp_pizzas = temp_menu.get_pizzas();
	
	for( int i = 0; i < temp_menu.get_num_pizzas(); i++) {
		
		cout << temp_pizzas[i].get_name() << temp_pizzas[i].get_small_cost() << temp_pizzas[i].get_medium_cost() << temp_pizzas[i].get_large_cost() << temp_pizzas[i].get_num_ingredients();
		
		string* temp = temp_pizzas[i].get_ingredients();
		
		for( int j = 0; j < temp_pizzas[i].get_num_ingredients(); j++) {
			
			cout << temp[j];
		}
		cout << endl;
	}
}

/************************************************
 *
 * Function: view_hours()
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
void Restaurant::view_hours() {
	
	
	
	for(int i = 0; i < 7; i++) {
		
	cout << week[i].day << week[i].open_hour << week[i].close_hour << endl;
	
	}
}

/************************************************
 *
 * Function: view_address()
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
void Restaurant::view_address() {
	
	cout << get_address() << endl;
}

/************************************************
 *
 * Function: view_phone()
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
void Restaurant::view_phone() {

	cout << get_phone() << endl;
}
	
	
/************************************************
 *
 * Function: Restaurant::search_menu_by_price();
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
//void Restaurant::search_menu_by_price();

/************************************************
 *
 * Function: search_by_ingredients();
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
//void Restaurant::search_by_ingredients();
	
// note that the following prototype was modified to include additional parameters
// selection is a dynamically allocated array of Pizza objects that are being ordered
// selection_size indicates the number of Pizza objects in the array
// num_ordered is a dynamically allocated array that indicates how many pizzas of each type were ordered
/************************************************
 *
 * Function: place_order(Pizza* selection, int selection_size, int* num_ordered);
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
//void Restaurant::place_order(Pizza* selection, int selection_size, int* num_ordered);
/************************************************
 *
 * Function: change_hours();
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
//void Restaurant::change_hours();
/************************************************
 *
 * Function: add_to_menu();
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
//void Restaurant::add_to_menu();
/************************************************
 *
 * Function: remove_from_menu();
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
//void Restaurant::remove_from_menu();
	/************************************************
 *
 * Function: view_orders();
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
//void Restaurant::view_orders();
	/************************************************
 *
 * Function: remove_orders();
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
//void Restaurant::remove_orders();
