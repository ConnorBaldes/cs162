/******************************************************
** Program: linked_list_node.hpp
** Author: Connor Baldes
** Date: 05/29/2019
** Description: Declaration/definition for the linked list node template class
                includes public value and next variable along with assiciated 
                class functions.
** Input:
** Output:
******************************************************/

#ifndef LINKED_LIST_NODE_HPP
#define LINKED_LIST_NODE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template <class T> 
class Linked_List_Node {

public:

   T val; // the value that this node stores

   Linked_List_Node<T> *next; // a pointer to the next node in the list
   // you can add constructors or other functionality if you you find it useful or necessary

/************************************************
 *  
 * Function: Linked_List_Node()
 *    
 * Description: Linked_List_Node constructor
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
   Linked_List_Node() {

       val = 0;

       next = nullptr;


   }
/************************************************
 *  
 * Function: Linked_List_Node()
 *    
 * Description: linked list node copy constructor
 *         
 * Parameters: constant linked list node refrence
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
   Linked_List_Node(const Linked_List_Node<T>& other) {

       this-> val = other.val;

       this-> next = other.next;

   }

/************************************************
 *  
 * Function: clear_node()
 *    
 * Description: clears given node 
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
   void clear_node() {


       delete [] next;

       next = nullptr;

       val = 0;
   }
/************************************************
 *  
 * Function: void operator=(const Linked_List_Node<T> &other)
 *    
 * Description: operator overload for linked list node
 *         
 * Parameters: linked list node refrence
 *    
 * Pre-Conditions:
 * 		 
 *
 *             
 * Post-Conditions: 
 * 
*********************************************/
    void operator=(const Linked_List_Node<T> &other) {

       if(this != &other) {

           if(this->next !=nullptr) {

                delete next;

                next = nullptr;
           }

            this->val = other.val;

            this-> next = other->next;


        }
    }


/************************************************
 *  
 * Function: set_val()
 *    
 * Description: sets value variable
 *         
 * Parameters: T value to set 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
    void set_val(T value) {

        this->val = value;

        this->next = nullptr;

    }
/************************************************
 *  
 * Function: get_val()
 *    
 * Description: gets value variable
 * 
 * Parameters:
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
    T get_val() {

        return val;
    }
/************************************************
 *  
 * Function: get_next()
 *    
 * Description: gets pointer to next node
 * 
 * Parameters:
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 * 
*********************************************/
    Linked_List_Node& get_next() {

        return *next;
    }

};

#endif