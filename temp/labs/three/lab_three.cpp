#include "lab_three.h"

Pizza::Pizza() {

	name = "Cheese";

	num_ingredients = 3;
}


Pizza::void set_name(string name) {

	this->name = name;

}

Pizza::void set_num_ingredients(int num){

	this -> num_ingredients = num;
}

Pizza::int get_num_ingredients() const {

	return num_ingredients;
}

Pizza::string get_name() const {

	return name;
}
Pizza::~Pizza() {

	cout << "Destructor" << endl;
}
void set_from_file() {

	ifstream myfile;

	myfile.open("menu.txt");

	if(myfile.is_open()) {

	}
}

