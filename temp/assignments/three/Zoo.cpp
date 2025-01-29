/***************************************************
 * Program: Zoo.cpp
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This is the grandparent class of the entire program. It will contain a float that is the balance of
 *              the owner of the zoo this amount will be made static and protected so that the Animal class and Animal
 *              classes within that class will be able to access it to add and subtract from the overall balance. The class 
 *              will also contain an Animal class that will contain all of the Animals in the zoo.
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include "Zoo.h"




using namespace std;


/************************************************
 *
 * Function: Zoo() 
 *
 * Description: Base constructor for Zoo class
 * 
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
Zoo::Zoo() {

    owner_balance = 100000;

    week = 0;

    num_monkeys = 0;

    num_sea_otters = 0;

    num_meerkats = 0;

    base_food_cost = 40;

    Monkeys = NULL;

    Sea_otters = NULL;

    Meerkats = NULL;

}
/************************************************
 *
 * Function: Zoo(const Zoo& old_zoo)
 *
 * Description: Copy constructor for Zoo class		
 *
 * Parameters:
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
Zoo::Zoo(const Zoo& old_zoo){

    this -> owner_balance = old_zoo.owner_balance;

    this -> week = old_zoo.week;


    this -> num_monkeys = old_zoo.num_monkeys;

    this -> num_sea_otters = old_zoo.num_sea_otters;

    this -> num_meerkats = old_zoo.base_food_cost;

    for(int i = 0; i < num_monkeys; i++) {

        Monkeys[i] = old_zoo.Monkeys[i];
    }

    for(int i = 0; i < num_sea_otters; i++) {

        Sea_otters[i] = old_zoo.Sea_otters[i];
    }

    for(int i = 0; i < num_meerkats; i++) {

        Meerkats[i] = old_zoo.Meerkats[i];
    }


}
/************************************************
 *
 * Function: ~Zoo()
 *
 * Description: Zoo destructor	
 *
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 *
 * *********************************************/
Zoo::~Zoo(){


    if(Monkeys != NULL) {

        delete [] Monkeys;

        Monkeys = NULL;
    }

    if(Meerkats != NULL) {

        delete [] Meerkats;

        Meerkats = NULL;
    }

    if(Sea_otters != NULL) {

        delete [] Sea_otters;

        Sea_otters = NULL;
    }

}
/************************************************
 *
 * Function: Zoo::operator=(const Zoo& old_zoo)
 *
 * Description: Assignment operator overload for the zoo operator	
 *
 * Parameters: 
 *
 * Pre-Conditions: 
 *
 * Post-Conditions: 
 * 
 * *********************************************/
Zoo& Zoo::operator=(const Zoo& old_zoo){

    if(this != &old_zoo) {
        if(Monkeys != NULL) {

            delete [] Monkeys;

            Monkeys = NULL;
        }

            if(Meerkats != NULL) {

            delete [] Meerkats;

            Meerkats = NULL;
        }

            if(Sea_otters != NULL) {

            delete [] Sea_otters;

            Sea_otters = NULL;
        }

        this -> owner_balance = old_zoo.owner_balance;

        this -> week = old_zoo.week;

        this -> num_monkeys = old_zoo.num_monkeys;

        this -> num_sea_otters = old_zoo.num_sea_otters;

        this -> num_meerkats = old_zoo.base_food_cost;

        for(int i = 0; i < num_monkeys; i++) {

            Monkeys[i] = old_zoo.Monkeys[i];
        }

        for(int i = 0; i < num_sea_otters; i++) {

            Sea_otters[i] = old_zoo.Sea_otters[i];
        }

        for(int i = 0; i < num_meerkats; i++) {

            Meerkats[i] = old_zoo.Meerkats[i];
        }
    }
    return *this;

 
}
/************************************************
 *
 * Function: get_owner_balance()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::get_owner_balance(){

    return owner_balance;

}
/************************************************
 *
 * Function: get_week()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::get_week(){

    return week;

}
/************************************************
 *
 * Function: get_Animals()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Animal Zoo::get_Animals(){

    return Animals;

}
/************************************************
 *
 * Function: set_owner_balance(float new_balance)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_owner_balance(float new_balance){

    owner_balance = new_balance;

}

/************************************************
 *
 * Function: set_week()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_week(){

    cout << endl;
    week += 1;

}
/************************************************
 *
 * Function: increase_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::increase_age() {

    increase_monkey_age();
    //cout << "end"  << endl;
    increase_sea_otter_age();
    //cout << "end" << endl;
    increase_meerkat_age();
    //cout << "end of increase age" << endl;
}
/************************************************
 *
 * Function: weekly_revenue()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::weekly_revenue() {

    cout << "Weekly Revenue: " << get_total_revenue() << endl;
    owner_balance += get_total_revenue();
    //cout << owner_balance << endl;
}
/************************************************
 *
 * Function: buy_animals()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::buy_animals(){
    int amount;
    bool try_again = false;
    do{
        check_input_int("Enter the number corresponding to the Animal you would like to buy Monkeys = 1, Sea otters = 2, Meerkats = 3, Dont buy Animal = 0: ", amount, '3');

        if(amount == 1 && 15000 < owner_balance) {

            buy_monkey();
        }

        else if(amount == 2 && 5000 < owner_balance) {

            buy_sea_otter();
        }
        else if( amount == 3 && 500 < owner_balance) {

            buy_meerkat();
        }
        else if(amount == 0) {

            cout << "No Animals bought." << endl; 
        }
        else {
            cout << "You dont have enough money for that Animal." << endl;
            try_again = true;
        }
    }while(try_again);
}
/************************************************
 *
 * Function: feed_animals()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::feed_animals(){

    cout << "Weekly animal feed: " << get_total_food_cost() << endl;
    owner_balance -= get_total_food_cost();

}
/************************************************
 *
 * Function: check_balance()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
bool Zoo::check_balance(){

    cout << "Your current balance is:" << owner_balance << endl;
    cout << endl;
    if(owner_balance <= 0) {

        return true;
    }

    return false;

}
/************************************************
 *
 * Function: random_event()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::random_event() {

    int go_beavs = rand() % 4;
    cout << "Weekly Secial Event: ";
    if(go_beavs == 0) {

        cout << "No special event" << endl;

    }
    else if(go_beavs == 1) {
        cout << "Sick animal" << endl;
        sick_animal();

    }
    else if(go_beavs == 2) {
        cout << "Animal birth" << endl;
        animal_birth();

    }
    else {
        cout << "Attendance boom" << endl;
        float temp = attendance_boom();

        owner_balance += temp;
    }
}
/************************************************
 *
 * Function: check_input_int(string message, int &int_input, char range)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::check_input_int(string message, int &int_input, char range) {

	string input;
	bool bad_input;
	do{

		bad_input = false;

		cout << message;

		cin >> input;

		if( input.at(0) == 0) {

			bad_input = true;
			cout << "You must input a number greater than 0. " << endl;
		}

		for( int i = 0; i < input.size(); i++) {


			if( !(input.at(i) >= '0' && input.at(i) <= range)) {

				cout << "You must input a postive integer" << endl;

				bad_input = true;
				break;
			}
		}
	}while(bad_input);

	int_input = atoi(input.c_str());

}
/************************************************
 *
 * Function: check_input_go_again(int &int_input)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::check_input_go_again(int &int_input) {
 
	string input;
	bool bad_input;
	int count;
	do{
		count = 0;
		
		bad_input = false;
		
		cout <<"Woud you like to go again? " << endl;
			cout << "To go again enter 1 to end enter 2: ";
		cin >> input;
 
		for( int i = 0; i < input.size(); i++) {
			
			count += 1;
			
			if( !(input.at(i) >= '1' && input.at(i) <= '2')) {
 
				cout << "You must input either a 1 or a 2." << endl;
				
				bad_input = true;
				break;
				}
 
			if(count > 1 )  {
				
				cout << "You must input either a 1 or a 2." << endl;
				
				bad_input = true;
				break;
				
				}
 
		}
	}while(bad_input);
	
	int_input = atoi(input.c_str());

}

/************************************************
 *
 * Function: get_num_monkeys()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::get_num_monkeys(){

    return num_monkeys;
}
/************************************************
 *
 * Function: get_num_sea_otters()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::get_num_sea_otters() {

    return num_sea_otters;
}
/************************************************
 *
 * Function: get_num_meerkats()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::get_num_meerkats() {

    return num_meerkats;
}
/************************************************
 *
 * Function: get_monkeys()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Monkey* Zoo::get_monkeys(){

    return Monkeys;
}
/************************************************
 *
 * Function: get_sea_otters()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Sea_otter* Zoo::get_sea_otters(){

    return Sea_otters;
}
/************************************************
 *
 * Function: get_meerkats()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
Meerkat* Zoo::get_meerkats(){

    return Meerkats;
}
/************************************************
 *
 * Function: set_monkeys(Monkey* new_monkeys)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_monkeys(Monkey* new_monkeys){

    this ->Monkeys = new_monkeys;
}
/************************************************
 *
 * Function: set_sea_otters(Sea_otter* new_sea_otters)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_sea_otters(Sea_otter* new_sea_otters){

    this -> Sea_otters = new_sea_otters;
}
/************************************************
 *
 * Function: set_meerkats(Meerkat* new_meerkats)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_meerkats(Meerkat* new_meerkats){

    this -> Meerkats = new_meerkats;
}
/************************************************
 *
 * Function: set_base_food_cost(int cost)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_base_food_cost(int cost){

    this ->base_food_cost = cost;
}
/************************************************
 *
 * Function: set_num_monkeys(int num)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_num_monkeys(int num){

    this -> num_monkeys = num;
}
/************************************************
 *
 * Function: set_num_sea_otters(int num)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_num_sea_otters(int num){

    this-> num_sea_otters = num;
}
/************************************************
 *
 * Function: set_num_meerkats(int num)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::set_num_meerkats(int num){

    this -> num_meerkats = num;
}
/************************************************
 *
 * Function: increase_monkey_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::increase_monkey_age() {

    if(Monkeys != NULL) {
        for( int i = 0; i < num_monkeys; i++) {
            //cout << "set age" << endl;
            Monkeys[i].set_age(1);                

        }
    }

}
/************************************************
 *
 * Function: increase_sea_otter_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::increase_sea_otter_age() {

    if(Sea_otters != NULL) {
        for( int i = 0; i < num_monkeys; i++) {
            //cout << "set age" << endl;
            Sea_otters[i].set_age(1);                

        }
    }
}
/************************************************
 *
 * Function: increase_meerkat_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::increase_meerkat_age() {

    if(Meerkats != NULL) {

        for( int i = 0; i < num_meerkats; i++) {
            //cout << " set age" << endl;
            Meerkats[i].set_age(1);                

        }
    }
}
/************************************************
 *
 * Function: get_total_food_cost()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Zoo::get_total_food_cost() {

    float monkey_cost = 0;

    float meerkat_cost = 0;

    float sea_otter_cost = 0;

    for(int i = 0; i < num_monkeys; i++) {

        monkey_cost += Monkeys[i].get_food_cost(base_food_cost);
    }

    for(int i = 0; i < num_meerkats; i++) {

        meerkat_cost += Meerkats[i].get_food_cost(base_food_cost);
    }

    for(int i = 0; i < num_sea_otters; i++ ) {

        sea_otter_cost += Sea_otters[i].get_food_cost(base_food_cost);

    }

    return (monkey_cost + meerkat_cost + sea_otter_cost);            
}
/************************************************
 *
 * Function: get_total_revenue()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Zoo::get_total_revenue() {

    float monkey_revenue = 0;

    float meerkat_revenue = 0;

    float sea_otter_revenue = 0;

    for(int i = 0; i < num_monkeys; i++) {

        monkey_revenue += Monkeys[i].get_revenue();
    }

    for(int i = 0; i < num_meerkats; i++) {

        meerkat_revenue += Meerkats[i].get_revenue();
    }

    for(int i = 0; i < num_sea_otters; i++ ) {

        sea_otter_revenue += Sea_otters[i].get_revenue();

    }
    //cout << "monkey: " << monkey_revenue << endl;
    //cout << "meerkat: " << meerkat_revenue << endl;
    //cout << "sea oter: " << sea_otter_revenue << endl;
    return (monkey_revenue + meerkat_revenue + sea_otter_revenue);   
   

}
/************************************************
 *
 * Function: sick_animal() 
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::sick_animal() {

    bool go_again = false;
    int temp = 0;
    int temp2 = 0;
    do{

        temp = rand() % 3;
        
        if(temp == 0) {

            if(num_monkeys > 0) {
                //cout << "monkey" << endl;
                sick_monkey(temp2);
            }
            else {
                go_again = true;
            }
        }
        else if(temp == 1) {

            if(num_sea_otters > 0) {
                //cout << "sea otter" << endl;
                sick_sea_otter(temp2);
            }

            else {
                go_again = true;
            }
        }
        else if(temp == 2) {
            //cout << "meerkat" << endl;
            if(num_meerkats > 0) {

                    sick_meerkat(temp2);

            }
            else {
                go_again = true;
            }

        }
        if(num_monkeys == 0 && num_sea_otters == 0 && num_meerkats == 0) {
            cout << "No animals to get sick" << endl;
            go_again = false;
        }

    }while(go_again);
}
/************************************************
 *
 * Function: sick_monkey(int temp2)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::sick_monkey(int temp2) {

    temp2 = rand() % num_monkeys;

    if(Monkeys[temp2].get_age() > 2) {

        if(owner_balance < (Monkeys[temp2].get_cost() ) ){

            remove_monkey(temp2);
        }

        else {
            owner_balance -= Monkeys[temp2].get_cost();
        }
    }
        
    else {


        if(owner_balance < (Monkeys[temp2].get_cost() / 2 ) ){

            remove_monkey(temp2);
        }

        else {
            owner_balance -= (Monkeys[temp2].get_cost()  / 2);

        }
    }    

}

/************************************************
 *
 * Function: sick_sea_otter(int temp2)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::sick_sea_otter(int temp2) {

    temp2 = rand() % num_monkeys;

    if(Monkeys[temp2].get_age() > 2){

        if(owner_balance < (Monkeys[temp2].get_cost() ) ){

            remove_sea_otter(temp2);
        }

        else {
            owner_balance -= Monkeys[temp2].get_cost();
        }
    }
        
    else {


        if(owner_balance < (Monkeys[temp2].get_cost() / 2 ) ){

            remove_sea_otter(temp2);
        }

        else {
            owner_balance -= (Monkeys[temp2].get_cost()  / 2);

        }
    }  
}

/************************************************
 *
 * Function: sick_meerkat(int temp2)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::sick_meerkat(int temp2) {

    temp2 = rand() % num_monkeys;

    if(Monkeys[temp2].get_age() > 2){

        if(owner_balance < (Monkeys[temp2].get_cost() ) ){

            remove_meerkat(temp2);
        }

        else {
            owner_balance -= Monkeys[temp2].get_cost();
        }
    }
        
    else {


        if(owner_balance < (Monkeys[temp2].get_cost() / 2 ) ){

            remove_meerkat(temp2);
        }

        else {
            owner_balance -= (Monkeys[temp2].get_cost()  / 2);

        }
    }  
}

/************************************************
 *
 * Function: animal_birth()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::animal_birth(){
        int count;
        bool go_again = false;

    do{

        int temp = rand() % 3;
        int temp2 = 0;
        if(temp == 0) {

            if(num_monkeys > 0) {
                
                count = check_monkey_age();
                
                if(count > 0) {
                    cout << " 1 monkey born." << endl;
                    add_monkey(Monkeys, 1, 0);
                }
                else {
                    go_again = true;
                }
            }

            else {
                go_again = true;
            }
        }
        else if(temp == 1) {


            if(num_meerkats > 0) {
                
                count = check_meerkat_age();
                
                if(count > 0) {
                    cout << "5 Meerkat born. " << endl;
                    add_meerkat(Meerkats, 5, 0);
                }
                else {
                    go_again = true;
                }
            }

            else {
                go_again = true;
            }
        }
        else if(temp == 2) {


            if(num_sea_otters > 0) {
                
                count = check_sea_otter_age();
                
                if(count > 0) {
                    cout << "2 Sea otters born." << endl;
                    add_sea_otter(Sea_otters, 1, 0);
                }
                else {
                    go_again = true;
                }
            }

            else {
                go_again = true;
            }           

        }

        if(num_monkeys == 0 && num_sea_otters == 0 && num_meerkats == 0 || count == 0) {
        cout << "No animals able to give birth." << endl;
        go_again = false;
        }
    }while(go_again);
}
/************************************************
 *
 * Function: attendance_boom()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
float Zoo::attendance_boom(){

    float bonus = 0;

    for(int i = 0; i < num_monkeys; i++) {

        bonus += ((rand() % 400) + 300);
    }
    return bonus;
}
 /************************************************
 *
 * Function: buy_monkey()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/       
void Zoo::buy_monkey(){

    int amount;
    bool try_again = false;
    do {
        check_input_int("How many Monkeys would you like to buy 1 or 2: ",amount, '2' );

        if( amount == 2 && 15000 * 2 >= owner_balance ) {

            cout << "You do not have enough money to by two monkeys." << endl;
            try_again = true;
        }
        else if(amount == 2 && (15000 * 2) < owner_balance ) {

            cout << "You bought two monkeys." << endl;
            add_monkey(Monkeys, 2, 104);
            owner_balance -= (15000 *2);

        }
        else {
            cout << "You bought one monkey." << endl;
            add_monkey(Monkeys, 1, 104);
            owner_balance -= 15000;
        }
    }while(try_again);
}
/************************************************
 *
 * Function: buy_meerkat()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::buy_meerkat(){

    int amount;
    bool try_again = false;
    do {
        check_input_int("How many Meerkats would you like to buy 1 or 2: ",amount, '2' );

        if( amount == 2 && 500 * 2 >= owner_balance ) {

            cout << "You do not have enough money to by two meerkats." << endl;
            try_again = true;
        }
        else if(amount == 2 && (500 * 2) < owner_balance ) {

            cout << "You bought two meerkats." << endl;
            add_meerkat(Meerkats, 2, 104);
            owner_balance -= (500 * 2);

        }
        else {
            cout << "You bought one meerkat." << endl;
            add_meerkat(Meerkats, 1, 104);
            owner_balance -= 500;
        }

    }while(try_again);
}
/************************************************
 *
 * Function: buy_sea_otter()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::buy_sea_otter(){

    int amount;
    bool try_again = false;
    do {
        check_input_int("How many Sea otters would you like to buy 1 or 2: ",amount, '2' );

        if( amount == 2 && 5000* 2 >= owner_balance ) {

            cout << "You do not have enough money to by two sea otters." << endl;
            try_again = true;
        }
        else if(amount == 2 && (5000 * 2) < owner_balance ) {

            cout << "You bought two Sea_otters." << endl;
            add_sea_otter(Sea_otters, 2, 104);
            owner_balance -= (5000 * 2);

        }
        else {
            cout << "You bought one sea otter." << endl;
            num_monkeys += 1;
            owner_balance -= 5000;
        }
    }while(try_again);
}
/************************************************
 *
 * Function: remove_monkey(int temp )
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::remove_monkey(int temp ){

    if( num_monkeys > 1) {

        num_monkeys--;

        for(int i = temp; i < num_monkeys; i++){

            Monkeys[i] = Monkeys[i+1];
        }
    }
    else { 
        delete [] Monkeys;

        Monkeys = NULL;
    }

}
/************************************************
 *
 * Function: remove_meerkat(int temp)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::remove_meerkat(int temp){

    if(num_meerkats > 1) {
        num_meerkats--;

        for(int i = temp; i < num_meerkats; i++){

            Meerkats[i] = Meerkats[i+1];
        }
    }
    else {
        delete [] Meerkats;

        Meerkats = NULL;
    }

}
/************************************************
 *
 * Function: remove_sea_otter(int temp)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::remove_sea_otter(int temp){

    if(num_sea_otters > 1)  {
        num_sea_otters--;

        for(int i = temp; i < num_sea_otters; i++){

            Sea_otters[i] = Sea_otters[i+1];
        }
    }
    else {

        delete [] Sea_otters;

        Sea_otters = NULL;
    }

}

/************************************************
 *
 * Function: add_monkey(Monkey* &old_monkeys, int added_num, int age)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::add_monkey(Monkey* &old_monkeys, int added_num, int age) {

    num_monkeys += added_num;

    Monkey* new_monkeys = new Monkey[num_monkeys];

    for(int i = 0; i < (num_monkeys - added_num); i++) {

        new_monkeys[i] = old_monkeys[i];
    } 
    for(int i = (num_monkeys - added_num); i < num_monkeys; i++) {

        new_monkeys[i].set_age(age);
    }
    delete [] old_monkeys;

    old_monkeys = new_monkeys;

}
/************************************************
 *
 * Function: add_sea_otter(Sea_otter* &old_sea_otter, int added_num, int age) 
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::add_sea_otter(Sea_otter* &old_sea_otter, int added_num, int age) {

    num_sea_otters += added_num;

    Sea_otter* new_sea_otter = new Sea_otter[num_sea_otters];

    for(int i = 0; i < (num_sea_otters - added_num); i++) {

        new_sea_otter[i] = old_sea_otter[i];
    } 
    for(int i = (num_sea_otters - added_num); i < num_sea_otters; i++) {

        new_sea_otter[i].set_age(age);
    }
    delete [] old_sea_otter;

    old_sea_otter = new_sea_otter;

}
/************************************************
 *
 * Function: add_meerkat(Meerkat* &old_meerkat, int added_num, int age)
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::add_meerkat(Meerkat* &old_meerkat, int added_num, int age) {

    num_meerkats += added_num;

    Meerkat* new_meerkats = new Meerkat[num_meerkats];

    for(int i = 0; i < (num_meerkats - added_num); i++) {

        new_meerkats[i] = old_meerkat[i];
    } 
    for(int i = (num_meerkats - added_num); i < num_meerkats; i++) {

        new_meerkats[i].set_age(age);
    }
    delete [] old_meerkat;

    old_meerkat = new_meerkats;

}
/************************************************
 *
 * Function: check_monkey_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::check_monkey_age(){

    int count = 0;

    for( int i = 0; i < num_monkeys; i++) {

        if(Monkeys[i].get_age() >= 104) {

            count +=1;
        }

    }
    return count;
}
/************************************************
 *
 * Function: check_meerkat_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::check_meerkat_age(){

    int count = 0;

    for( int i = 0; i < num_monkeys; i++) {

        if(Meerkats[i].get_age() >= 104) {

            count +=1;
        }

    }
    return count;
}
/************************************************
 *
 * Function: check_sea_otter_age()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
int Zoo::check_sea_otter_age(){

    int count = 0;

    for( int i = 0; i < num_monkeys; i++) {

        if(Sea_otters[i].get_age() >= 104) {

            count +=1;
        }

    }
    return count;
}
/************************************************
 *
 * Function: delete_animals()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::delete_animals() {

    delete_monkeys();

    delete_sea_otters();

    delete_meerkats();

}
/************************************************
 *
 * Function: delete_monkeys(
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::delete_monkeys() {

    if(Monkeys != NULL) {

        delete [] Monkeys;

        Monkeys = NULL;
    }

}
/************************************************
 *
 * Function: delete_sea_otters()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::delete_sea_otters() {

    if(Sea_otters != NULL) {

        delete [] Sea_otters;

        Sea_otters = NULL;
    }


}
/************************************************
 *
 * Function: delete_meerkats()
 *
 * Description: Checks to see if an input string is a valid integer, it does this by looping through all the characters in the string and checks the ascii value
 *		to see if it is between the value '0' and '9'. If all the characters in the string are in that range the string is a valid integer. In that case the
 *		the loop is broken and the string is converted into an int and the int value is returned from the function. If the string contains any non int value 
 *		the user is told their input is bad and is re prompted		
 *
 * Parameters: string message: a message that is strored in a string. The message will tell the user what it is they are inputing
 *
 * Pre-Conditions: string message: telling what to input
 * 		   string input: empty variable that will get input value
 *
 * Post-Conditions: int int_input: correctly input string that was converted to an int and is returned from function
 *
 * *********************************************/
void Zoo::delete_meerkats() {

    if(Meerkats != NULL) {

        delete [] Meerkats;

        Meerkats = NULL;
    }

}