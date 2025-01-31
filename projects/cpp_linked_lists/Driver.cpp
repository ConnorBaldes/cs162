/******************************************************
** Program: Assignment Five
** Author: Connor Baldes
** Date: 06/9/2019
** Description: This program creates a linked list of either signed or unsigned integer 
                values that the user can add as many elements to as they choose, the user
                then chooses whether to sort those numbers in ascending or descending order.
                The values are then sorted and the printed along with the amount of  prime numbers
                that are in the list.
** Input:
** Output:
******************************************************/

#include "Linked_List.hpp"
#include "Linked_List_Node.hpp"

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
void check_input_unsigned_int(string message, unsigned int &int_input, char lower_bound, char upper_bound) {

	string input;
	bool bad_input;
	do{

		bad_input = false;

		cout << message;

		cin >> input;


		for( int i = 0; i < input.size(); i++) {


			if( !(input.at(i) >= lower_bound && input.at(i) <= upper_bound)) {

				cout << "You must input a postive integer" << endl;

				bad_input = true;
				break;
			}
		}
	}while(bad_input);

	int_input = stoul(input);

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
void check_input_int(string message, int &int_input, char lower_bound, char upper_bound) {

	string input;
	bool bad_input;
	do{

		bad_input = false;

		cout << message;

		cin >> input;


		for( int i = 0; i < input.size(); i++) {

            if(i > 0 && input.at(i) == '-') {

				cout << "You must an integer" << endl;

				bad_input = true;
				break;

            }

			if( !((input.at(i) >= lower_bound && input.at(i) <= upper_bound) || input.at(i) == '-')) {

				cout << "You must an integer" << endl;

				bad_input = true;
				break;
			}
		}
	}while(bad_input);

	int_input = stoi(input);

}

int main() {

    unsigned int play_again;
    do{

    
        unsigned int type;

        check_input_unsigned_int("If you would like to use unsigned ints enter 1 if you want to used signed ints enter 2: ", type, '1', '2');
    

        if(type == 1) {
        
            Linked_List<unsigned int> my_list;

            unsigned int go_again;

            unsigned int value;

            unsigned int sort;

            do{

                check_input_unsigned_int("Enter an unsigned int: ", value, '0', '9');

                my_list.push_back(value);

                check_input_unsigned_int("If you would like to enter another number enter 1 if not enter 2: ", go_again, '1', '2');

            }while(go_again == 1);

        //my_list.insert(4, 1);

            check_input_unsigned_int("Would you like to sort ascending 1 or descending 2: ", sort, '1', '2');

            if(sort == 1) {

                my_list.sort_ascending();

                my_list.print();
            }
            else {
            my_list.sort_descending();

            my_list.print();
            }

            my_list.clear();
        //cout << my_list.get_length() << endl;
        }
        else {

            Linked_List<int> my_list;

            unsigned int go_again;

            int value;

            unsigned int sort;

            do{

                check_input_int("Enter an integer: ", value, '0', '9');

                my_list.push_back(value);

                check_input_unsigned_int("If you would like to enter another number enter 1 if not enter 2: ", go_again, '1', '2');

            }while(go_again == 1);

        //my_list.insert(4, 1);

            check_input_unsigned_int("Would you like to sort ascending 1 or descending 2: ", sort, '1', '2');

            if(sort == 1) {

                my_list.sort_ascending();

                my_list.print();
            }
            else {
            my_list.sort_descending();

            my_list.print();
            }
            my_list.clear();   
        }
        check_input_unsigned_int("If you would like to go again enter 1 if not enter 2: ", play_again, '1', '2');
    }while(play_again == 1);




        //cout << my_list.get_length() << endl;

    return 0;


}

//go beavs