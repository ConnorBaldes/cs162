 /******************************************************
** Program: linked_list.hpp
** Author: Connor Baldes
** Date: 06/9/2019
** Description: Linked list class declaration/definition includes integer value for list
                length also a linked list node pointer to the first node in the linked 
                list also an integer variable to hold the prime number amount. Also all 
                neccessary class functions
** Input:
** Output:
******************************************************/
#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Linked_List_Node.hpp"

using namespace std;

template <class T>
class Linked_List {

    private:
        unsigned int length; // the number of nodes contained in the list
        
        Linked_List_Node<T> *first; // a pointer to the first node in the list
        // anything else you need...

        unsigned int prime_count; //number of prime number sin linked list


    public:
/************************************************
 *  
 * Function: Linked_List()
 *    
 * Description: Constructor for linked list
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 * 		    
 *                
*********************************************/
        Linked_List() {

            length = 0;

            first = nullptr;

            prime_count = 0;

           // left = nullptr;

            //right = nullptr;

        }
/************************************************
 *  
 * Function: get_lenght()
 *    
 * Description: returns length
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        unsigned int get_length() {

            return length;
        }
/************************************************
 *  
 * Function: get_prime_count()
 *    
 * Description: returns number of prime numbers
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        unsigned int get_prime_count() {

            return prime_count;
        }
/*
        Linked_List_Node<T>* get_left() {

            return left;
        }
        
        Linked_List_Node<T>* get_right() {

            return right;
        }
*/
/************************************************
 *  
 * Function: get_first()
 *    
 * Description: returns pointer to first element 
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        Linked_List_Node<T>* get_first() {

            return first;
        }
        // note: there is no set_length(unsigned int) (the reasoning should be intuitive)

        // output a list of all integers contained within the list
/************************************************
 *  
 * Function: print()
 *    
 * Description: prints linked list values
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        void print() {

            Linked_List_Node<T> *iter = first;

            while(iter != nullptr) {

                cout << iter->val << " ";

                iter = iter->next;

            }
            cout << endl;

            check_prime();


            cout << "Prime numbers: " << prime_count << endl;
        } 
/************************************************
 *  
 * Function: clear()
 *    
 * Description: clears linked list of all elements and sets length to 0
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        void clear() { // delete the entire list (remove all nodes and reset length to 0)

            Linked_List_Node<T> *current = first;

            Linked_List_Node<T> *next;

            while(current != nullptr) {

                next = current->next;

                delete current;

                current = next;
            }

            //first = nullptr;
        
            length = 0;

            prime_count = 0;
        }

/************************************************
 *  
 * Function: push_front()
 *    
 * Description: pushes the front of the list forward and adds a new element at 
 *              the beginning 
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        unsigned int push_front(T value) { // insert a new value at the front of the list (returns the new length of the list)

            Linked_List_Node<T>* new_node = new Linked_List_Node<T>;

            new_node->set_val(value);

            if(length == 0) {

                first = new_node;

                first->next = nullptr;


            }
            else {

                new_node->next = (first);

                new_node->next->next = nullptr;

                first->next = (new_node);
            }


            length += 1;

            return length;

        }
/************************************************
 *  
 * Function: push_back()
 *    
 * Description: pushes the front of the list back and adds a new element at 
 *              the end 
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
 * *********************************************/

        unsigned int push_back(T value) { // insert a new value at the back of the list (returns the new length of the list)

            Linked_List_Node<T>* new_node = new Linked_List_Node<T>;

            Linked_List_Node<T>* last = first;

            new_node->set_val(value);


            new_node->next = nullptr;

            if(first == nullptr) {

                first = new_node;

                length += 1;

                return length;
            }
            
            while(last->next != nullptr) {

                last = last->next;
            }

            last->next = new_node;

            length += 1;

            return length;

        }

        
/************************************************
 *  
 * Function: insert()
 *    
 * Description: inserts new element after a given index in the linked list
 *         
 * Parameters: 
 *    
 * Pre-Conditions:
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        unsigned int insert(T val, unsigned int index) {  // insert a new value in the list at the specified index (returns the new length of the list)

            Linked_List_Node<T>* temp;

            temp = first;

            for(unsigned int i = 0; i < length; i++) {



                if( i == index) {

                    if(first != nullptr) {

                        Linked_List_Node<T>* new_node = new Linked_List_Node<T>;

                        new_node->set_val(val);    

                        new_node->next = first->next;
                        //cout << new_node->get_val() << endl;
                        first->next = new_node;
                        //cout << first->next->get_val()<< endl;
                        first = temp;

                        length += 1;

                        return length;     
                        
                    }
                    else{
                        cout << "Node at given index cannot be null pointer. " << endl;
                    }
                }

                first = first->next;

            }

            cout << "Given index not found." << endl;

            first = temp;

        }
/************************************************
 *  
 * Function: sort_ascending()
 *    
 * Description: sorts elements in the list in an ascending order
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        void sort_ascending() { // sort the nodes in ascending order. You must implement the recursive Merge Sort algorithm
                                // Note: it's okay if sort_ascending() calls a recursive private function to perform the sorting.
            merge_sort_asc(&first);

        }

/************************************************
 *  
 * Function: sort_descending()
 *    
 * Description: sorts elements in the list in an descending order
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/

        void sort_descending() {

            merge_sort_des(&first);
        } // sort the nodes in descending order
        // you can add extra member variables or functions as desired

/************************************************
 *  
 * Function: merge_sort_asc()
 *    
 * Description: uses merge sort algorythm to sort the values in an ascending order
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        void merge_sort_asc(Linked_List_Node<T>** first_ref) {

            Linked_List_Node<T>* head = *first_ref;

            Linked_List_Node<T>* left;

            Linked_List_Node<T>* right;


            if(head == nullptr || head->next == nullptr) {

                return;
            }
            split(head, left, right);

            merge_sort_asc(&left);
            merge_sort_asc(&right);

            *first_ref = sorted_asc(left, right);



        }

/************************************************
 *  
 * Function: merge_sort_des()
 *    
 * Description: uses merge sort algorythm to sort the values in an descending order
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *   
*********************************************/
        void merge_sort_des(Linked_List_Node<T>** first_ref) {

            Linked_List_Node<T>* head = *first_ref;

            Linked_List_Node<T>* left;

            Linked_List_Node<T>* right;


            if(head == nullptr || head->next == nullptr) {

                return;
            }
            split(head, left, right);

            merge_sort_des(&left);
            merge_sort_des(&right);

            *first_ref = sorted_des(left, right);



        }

/************************************************
 *  
 * Function: sorted_asc()
 *    
 * Description: returns sorted list in ascending order
 *         
 * Parameters:
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        Linked_List_Node<T>* sorted_asc(Linked_List_Node<T>* left, Linked_List_Node<T>* right) {

            Linked_List_Node<T>* final_sort = nullptr;

            if(left == nullptr) {

                return right;


            }

            else if(right == nullptr) {

                return left;
            }
            if(left->get_val() <= right->get_val()) {

                final_sort = left;
                final_sort->next = sorted_asc(left->next, right);
            }

            else {
                final_sort = right;
                final_sort->next = sorted_asc(left, right->next);

            }
            return final_sort;
        }


/************************************************
 *  
 * Function: sorted_des()
 *    
 * Description: returns sorted list in descending order
 *         
 * Parameters:
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        Linked_List_Node<T>* sorted_des(Linked_List_Node<T>* left, Linked_List_Node<T>* right) {

            Linked_List_Node<T>* final_sort = nullptr;

            if(left == nullptr) {

                return right;


            }

            else if(right == nullptr) {

                return left;
            }
            if(left->get_val() >= right->get_val()) {

                final_sort = left;
                final_sort->next = sorted_des(left->next, right);
            }

            else {
                final_sort = right;
                final_sort->next = sorted_des(left, right->next);

            }
            return final_sort;
        }


/************************************************
 *  
 * Function: split()
 *    
 * Description: splits the linked list into a left and right side to recursevely 
 *              be sorted when only two elements remain on each side
 *         
 * Parameters:
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 *                
*********************************************/
        void split(Linked_List_Node<T>* first_ref, Linked_List_Node<T>* &left, Linked_List_Node<T>* &right) {

            Linked_List_Node<T>* left_mid;

            Linked_List_Node<T>* right_mid;

            left_mid = first_ref;

            right_mid = first_ref->next;

            //cout << left_mid->get_val() << endl;

            //right_mid->print();

            while(right_mid != nullptr) {

                right_mid = right_mid->next;
                
                if(right_mid != nullptr) {

                    //cout << "sheesh" << endl;

                    left_mid = left_mid->next;

                    right_mid = right_mid->next;

                }
                //else {cout << right_mid->get_val() << endl;}
    
                //cout << "go beavs" << endl;
            }

            left = first_ref;

            right = left_mid->next;

            left_mid->next = nullptr;

        }

/************************************************
 *  
 * Function: is_prime()
 *    
 * Description: checks to see if a given number is prime
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions:
 *                
*********************************************/
        bool is_prime(T n) {

           
           bool prime = true;

            if(n < 0) {
                return false;
            }
            for(unsigned int i = 2; i <= n / 2; i++) {

                if(n % i == 0) {

                    prime = false;
                    break;

                }
            }
            return prime;
        }


/************************************************
 *  
 * Function: check_prime()
 *    
 * Description: counts the number of prime numbers in the entire linked list
 *         
 * Parameters: 
 *    
 * Pre-Conditions: 
 *
 *             
 * Post-Conditions: 
 * 
*********************************************/
        void check_prime() {

            Linked_List_Node<T> *iter = first;

            while(iter != nullptr) {

                if(is_prime(iter->get_val()) == true) {

                    prime_count += 1;
                }

                iter = iter->next;

            }
            cout << endl;
        }


};


#endif