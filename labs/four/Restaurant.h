/*
 
   Connor Baldes
   go beavs

  */


#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Restaurant {

	private:
		Menu menu;

		int num_employees;

		int week_days;

		employee* employees;

		hours* week;

		string name;

		string phone;

		string address;

	public:
		Restaurant();

		Restaurant(const Restaurant&);

		Restaurant& operator=(const Restaurant&);

		~Restaurant();

		void load_data();

		bool login(string id, string password);

		void set_name(string);

		void set_phone(string);

		void set_address(string);
		void set_hours(hours*);

		void set_employees(employee*);

		void view_menu() const;

		void view_phone() const;

		void view_address() const;

		void view_hours() const;

		void search_menu_price() const;

		void search_by_ingredients() const;
	};
#endif
