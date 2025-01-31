#include <iostream>
#include <cstdlib>
#include <string>
#include "pet.h"


using namespace std;

#ifndef DOG_H
#define DOG_H

class Dog : public Pet {



	private:


		string breed;



	public:



		Dog();

		~Dog();

		Dog(const Dog&);

		Dog& operator=(const Dog&);

		string get_breed();

		void set_breed(string);

		string getLifespan();
};

#endif
