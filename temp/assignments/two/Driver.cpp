
/**********************************************
 * 
 * Program Filename: Assignment_Two  
 *
 * Author: Connor Baldes
 *
 * Date: 4-29-2019
 *
  Description: This program will take information from text files to create a set of classes that include informantion on pizzas, employees at a restaurant, and information on that restaurant. The program is a website
			   that either an employee or customer can access employees can change aspects of the website such as pizzas on the menu, hours ope, phone number, customer orders, etc. And customers can log on and sort through
			   the menu by things such as price and ingredients and order a pizza based on that.
 *
 * Input: Employee: ID, password, what they want to view, what they want to change
		  customer: what to sort by, what to order
 *
 * Output: Sorted lists
 
 * ********************************************/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Pizza.h"
#include "Menu.h"

using namespace std;

int main() {
	
	ifstream menu_file;
	ifstream employee_file;
	ifstream restaurant_info;
	menu_file.open("menu.txt");
	employee_file.open("employee.txt");
	restaurant_info.open("restaurant_info.txt"); 
	
	
	
	menu_file.close();
	employee_file.close();
	restaurant_info.close();
	return 0;
}