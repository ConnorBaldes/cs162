#include <iostream>
#include <cstdlib>
#include <string>
#include "pet.h"
#include "dog.h"


using namespace std;


Dog::Dog() {

	breed = " ";
}

Dog::~Dog() {
}

Dog::Dog(const Dog& other) {

	this-> breed = other.breed;

}

Dog& Dog::operator=(const Dog& other) {

	if(this != &other) {

		this-> breed = other.breed;
	}

	return *this;
}

string Dog::get_breed() {

	return breed;
}

void Dog::set_breed(string other){

	breed = other;
}

string Dog::getLifespan() {

	if(weight > 100) {

		return "Approximetely 7 years";
	}
	else {

		return "Aproximately 13 years";

	}
}


