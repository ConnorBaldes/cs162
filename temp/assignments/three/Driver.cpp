/***************************************************
 * Program: Driver.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This file holds the driver for the zoo game that this assignment is creating. it has all of the 
 *              .h files included because it is where all of the other code is implemented.
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/


#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>
#include <cstdio>
#include "Animal.h"
#include "Monkey.h"
#include "Meerkat.h"
#include "Sea_otter.h"
#include "Zoo.h"

using namespace std;



int main() {

    srand(time(NULL));

    Zoo Connors_zoo;

    int go_again;

    do{
        Connors_zoo.set_week();
        cout << "Weeks: " << Connors_zoo.get_week() << endl;
        //cout << "1" << endl;
        Connors_zoo.increase_age();
        
        if(Connors_zoo.check_balance() == true) {

            cout << "You ran out of money!" << endl;
            break;
        }
        //cout << "2" << endl;
        Connors_zoo.random_event();

        if(Connors_zoo.check_balance() == true) {

            cout << "You ran out of money!" << endl;
            break;
        }
        //cout << "3" << endl;
        Connors_zoo.weekly_revenue();
      
        if(Connors_zoo.check_balance() == true) {

            cout << "You ran out of money!" << endl;
            break;
        }
        //cout << "4" << endl;
        Connors_zoo.buy_animals();

        if(Connors_zoo.check_balance() == true) {

            cout << "You ran out of money!" << endl;
            break;
        }
        //cout << "5" << endl;
        Connors_zoo.feed_animals();

        if(Connors_zoo.check_balance() == true) {

            cout << "You ran out of money!" << endl;
            break;
        }
        //cout << "6" << endl;
        Connors_zoo.check_input_go_again(go_again);



    }while(go_again != 2);
    cout << "Game Over" << endl;
    Connors_zoo.delete_animals();
}