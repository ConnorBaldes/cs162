#include <iostream>
#include <cstdlib>
#include <string>
#include "pet.h"

using namespace std;



Pet::Pet() {


	name = " ";

	weight = 0;

}

Pet::~Pet() {
}

Pet::Pet(const Pet& other) {

	this->name = other.name;

	this->weight = other.weight;


}

Pet& Pet::operator=(const Pet& other ) {

	if(this != &other) {


		this->name = other.name;

		this->weight = other.weight;
	}

	return *this;
}


string Pet::get_name() {

	return name;

}

int Pet::get_weight() {

	return weight;
}

void Pet::set_name(string other) {

	name = other;
}

void Pet::set_weight(int other) {

	weight = other;
}

string Pet::getLifespan() {

	return "Unkown Lifespan.";
}


