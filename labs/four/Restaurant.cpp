#include "Restaurant.h"


Restaurant::Restaurant() {

	cout << "Regular constructor called" << endl;

	name = "go beavs";

	phone = "123-456-789";

	address = "123 eight ams suck str.";

	employees = NULL;

	week = NULL;

}

Restaurant::~Restaurant() {

	cout << "Destructor called." << endl;

	if(employees != NULL) {

		delete [] employees;

		employees = NULL;

	}
	if(week != NULL) {

		delete [] week;

		week = NULL;
	}
}

Restaurant::Restaurant(const Restaurant copy&) {

	cout << "Copy constructor called" << endl;

	this -> num_employees = copy.num_employees;

	this -> week_days = copy.week_days;

	this -> name = copy.name;

	this -> phone = copy.phone;

	this -> address = copy.address;

	for(int i = 0; i < this->num_employees; i++) {

		this->employees[i] = copy.employees[i];
	}
	for(int i = 0; i < week_days; i++) {

		this -> week[i] = copy.week[i];
	}

}

Restaurant& Restaurant:: operator=(const Restaurant& copy) {

	cout << "In assignment operator overload" << endl;

	if(employees != NULL) {

		delete [] employees;

		employees = NULL;

	}
	if(week != NULL) {

		delete [] week;

		week = NULL;
	}

	this -> num_employees = copy.num_employees;

	this -> week_days = copy.week_days;

	this -> name = copy.name;

	this -> phone = copy.phone;

	this -> address = copy.address;

	for(int i = 0; i < this->num_employees; i++) {

		this->employees[i] = copy.employees[i];
	}
	for(int i = 0; i < week_days; i++) {

		this -> week[i] = copy.week[i];
	}
}

int main() {

	Restaurant food_place;


}

