/***************************************************
 * Program: Animal.h
 * 
 * Author: Connor Baldes
 * 
 * Date: 5-10-2019
 * 
 * Description: This class doestn do anything. I tried to make it include the array of animals but that
 *              didnt work. It is still the parent function of all the animals but id doesnt serve a purpose. 
 * 
 * Input:
 * 
 * Output:
 * 
 ***************************************************/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <ctime>





using namespace std;


class Animal {

    protected:


    public: 

        Animal();
        
        Animal(const Animal&);

        ~Animal();

        Animal& operator=(const Animal&);






};

#endif