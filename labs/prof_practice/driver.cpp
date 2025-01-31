#include <iostream>
#include <cstdlib>
#include "pet.h"
#include "dog.h"

using namespace std;

int main() {

	string temp;
	int temp_int;
	int num_dogs;

	Pet my_pet;
	
	Dog* my_dog;

	cout << "Please enter the the name of your pet: ";
	cin >> temp;

	cout << "Please enter your pets weight: ";
	cin >> temp_int;

	my_pet.set_name(temp);
	my_pet.set_weight(temp_int);

	cout << endl;

	cout << my_pet.getLifespan() << endl;


	cout << "How many dogs: ";
	cin >> num_dogs;

	my_dog = new Dog[num_dogs];

	for(int i = 0; i < num_dogs; i++) {

		cout << "Name: ";
		cin >> temp;
		my_dog[i].set_name(temp);
		cout << endl;

		cout << "Breed: ";
		cin >> temp;
		my_dog[i].set_breed(temp);
		cout << endl;

		cout << "Weight: ";
		cin >> temp_int;
		my_dog[i].set_weight(temp_int);
		cout << endl;
	}

	for(int i = 0; i < num_dogs; i++){

		cout << "Dog " << i << ": " << my_dog[i].getLifespan() << endl;
	}

	delete [] my_dog;

	return 0;
}


