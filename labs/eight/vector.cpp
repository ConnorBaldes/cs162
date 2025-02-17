#include "./vector.hpp"
#include <stdexcept>
#include <vector>
#include <iostream>

//We do not want to include either stmt. We wouldn't 
//be able to compare our vector template to the Standard 
//using namespace std;
//using std::vector;
using std::cout;
using std::endl;

int main (){
   vector<int> v;   //Our vector class
   std::vector<int> stdv; //Standard vector

   //Compare operation of our vector to std
   v.push_back(23);
   stdv.push_back(23);
   
   cout << "Our vector size: " << v.size() << endl;
   cout << "STL vector size: " << stdv.size() << endl;

   cout <<"Our vector first element: " <<v[0] << endl;
   cout << "STL vector first element: " << stdv[0] << endl;

   try {
      cout << "Access our vector out of range " << v.at(2) << endl;
   } catch(std::out_of_range) {
      cout <<"Tried to access something out of range" << endl;
   }

   return 0;
}
