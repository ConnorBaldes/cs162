#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


#ifndef PET_H
#define PET_H


class Pet {


	protected:


		string name;

		int weight;

	public:


		Pet();

		~Pet();

		Pet(const Pet&);


		Pet& operator=(const Pet&);


		string get_name();

		int get_weight();

		void set_name(string);

		void set_weight(int);

		string getLifespan();
};

#endif
