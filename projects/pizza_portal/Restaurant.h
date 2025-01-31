
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Pizza.h"
#include "Menu.h"
#include "Structs.h"

using namespace std;

class Restaurant {
	
  private:
  
    Menu menu;
	
    employee* employees;
	
    hours* week;
	
	  //added the num_employees variable to make it easier when creating the array of employees to know how many positions to create
	  int num_employees;
	
    string name;
	
    string phone;
	
    string address;
	
  public:
  
	Restaurant();
	
	Restaurant(const Restaurant&);
	
	~Restaurant();
	
	Restaurant& operator=(const Restaurant&);
	
	Menu get_menu() const;
	
	employee* get_employees() const;
	
	hours* get_week() const;
	
	int get_num_employees() const;
	
	string get_name() const;
	
	string get_phone() const;
	
	string get_address() const;
	
	void set_menu(Menu);
	
	void set_employees(employee*);
	
	void set_num_employees(int);
	
	void set_num_employees_from_file(ifstream&);
	
	void set_employees_from_file(ifstream& );
	
	void set_restaurant_info_from_file(ifstream& );
	
	void set_week(hours*);
	
	void set_name(string);
	
	void set_phone(string);
	
	void set_address(string);
	
  void load_data(ifstream&, ifstream&, ifstream&); //reads from files to correctly populate menu, employees, hours, etc.
	
  bool login(int id, string password);
	
  void view_menu();
	
  void view_hours();
	
    void view_address();
	
    void view_phone();
	
    void search_menu_by_price();
	
    void search_by_ingredients();
	
    // note that the following prototype was modified to include additional parameters
    // selection is a dynamically allocated array of Pizza objects that are being ordered
    // selection_size indicates the number of Pizza objects in the array
    // num_ordered is a dynamically allocated array that indicates how many pizzas of each type were ordered
	
    void place_order(Pizza* selection, int selection_size, int* num_ordered);
	
    void change_hours();
	
    void add_to_menu();
	
    void remove_from_menu();
	
    void view_orders();
	
    void remove_orders();
	
};

#endif