

#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

class Pizza {
	
	private:
		
		string name;
		
		int small_cost;
		
		int medium_cost;
		
		int large_cost;
		
		int num_ingredients;
		
		string* ingredients;
		
	public:
		
		//constructor
		Pizza();
		
		//copy constructor
		Pizza(const Pizza&);
		
		//assignment operator overload
		Pizza& operator=(const Pizza&);
		
		//destructor
		~Pizza();
		
		//accessor name
		string get_name() const;
		
		//accessor small cost
		int get_small_cost() const;
		
		//accessor medium_cost
		int get_medium_cost() const;
		
		//accessor large_cost
		int get_large_cost() const;
		
		//accessor number of ingredients
		int get_num_ingredients() const;
		
		//accessor ingredients
		string* get_ingredients() const;
		
		//mutator name
		void set_name(string);
		
		//mutator small cost
		void set_small_cost(int);
		
		//mutator medium_cost
		void set_medium_cost(int);
		
		//mutator large_cost
		void set_large_cost(int);
		
		//mutator number of ingredients
		void set_num_ingredients(int);
		
		//mutator ingredients
		void set_ingredients(string*);
		
		void set_from_file(ifstream&);
		
};

#endif
		