/***************************************************
 * Program: Zoo.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This is the grandparent class of the entire program. It will contain a float that is the balance of
 *              the owner of the zoo this amount will be made static and protected so that the animal class and animal
 *              classes within that class will be able to access it to add and subtract from the overall balance. The class 
 *              will also contain an animal class that will contain all of the animals in the zoo.
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Monkey.h"
#include "Meerkat.h"
#include "Sea_otter.h"

using namespace std;


class Zoo {

    protected:

        float owner_balance;

        int week;

        Animal Animals;

        int num_monkeys;

        int num_sea_otters;

        int num_meerkats;

        float base_food_cost;

        Monkey* Monkeys;

        Sea_otter* Sea_otters;

        Meerkat* Meerkats;


    public:

        Zoo();

        Zoo(const Zoo&);

        ~Zoo();

        Zoo& operator=(const Zoo&);

        int get_owner_balance();

        int get_week();

        Animal get_Animals();

        void set_owner_balance(float);

        void set_animals(Animal);

        void set_week();

        void increase_age();

        void random_event();

        void weekly_revenue();

        void buy_animals();

        void feed_animals();

        bool check_balance();


        void check_input_int(string, int &, char range);

        void check_input_go_again(int &int_input);

        int get_num_monkeys();

        int get_num_sea_otters();

        int get_num_meerkats();

        Monkey* get_monkeys();

        Sea_otter* get_sea_otters();

        Meerkat* get_meerkats();

        void set_monkeys(Monkey*);

        void set_sea_otters(Sea_otter*);

        void set_meerkats(Meerkat*);

        void set_base_food_cost(int);

        void set_num_monkeys(int);

        void set_num_sea_otters(int);

        void set_num_meerkats(int);

        void increase_monkey_age();

        void increase_sea_otter_age();

        void increase_meerkat_age();

        float get_total_food_cost();

        float get_total_revenue();

        void buy_monkey();

        void buy_meerkat();

        void buy_sea_otter();

        void remove_monkey(int);

        void remove_meerkat(int);

        void remove_sea_otter(int);

        void sick_animal();

        void animal_birth();

        float attendance_boom();

        void sick_monkey(int);

        void sick_sea_otter(int);

        void sick_meerkat(int);

        void add_monkey(Monkey* &, int, int);

        void add_meerkat(Meerkat* &, int, int);

        void add_sea_otter(Sea_otter* &, int, int);

        int check_monkey_age();

        int check_meerkat_age();

        int check_sea_otter_age();

        void delete_animals();

        void delete_monkeys();

        void delete_sea_otters();

        void delete_meerkats();
};

#endif