#include <iostream> 
#include <cstdlib>
#include <string> 
#include <fstream>

using namespace std;


class Pizza {

	private:
		string name;
		int num_ingredients;
	public:
		Pizza();
		void set_name(string);
		void set_num_ingredients(int);

};



//Pizza::void set_name(string name);

string get_name() const;

//Pizza::void set_num_ingredients(int num);

int get_num_ingredients() const;

void set_from_file();

