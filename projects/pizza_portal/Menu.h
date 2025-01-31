#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include "Pizza.h"


using namespace std;

class Menu {
	
  private:
  
    int num_pizzas;
	
    Pizza* pizzas;
	
  public:
  
	Menu();
	
	Menu(const Menu&);
	
	~Menu();
	
	Menu& operator=(const Menu&);
	
	int get_num_pizzas() const;
	
	Pizza* get_pizzas() const;
	
	void set_num_pizzas(int);
	
	void set_pizzas(Pizza*);
	
    Menu search_pizza_by_cost(int upper_bound);
	
    Menu search_pizza_by_ingredients_to_include(string* ingredients, int num_ingredients_search);
	
    Menu search_pizza_by_ingredients_to_exclude(string* ingredients, int num_ingredients_search);
	
    void add_to_menu(Pizza pizza_to_add);
	
    void remove_from_menu(int index);
	
	void set_values_from_file(ifstream&);
	
};

#endif