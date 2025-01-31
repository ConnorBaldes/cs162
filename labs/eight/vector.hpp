#include <stdlib.h>
#include <stdexcept>

template <class T>
class vector {
   private:
      T *v;
      int s;
   public:
      vector(){
	     s=0;
	     v=NULL;
      }
	  void operator=(vector<T> &other) {

        if(this != other) {

            if(this->v != NULL) {


		delete[] v;

               v = NULL;
            }

	    v= new T[other.s];

            this->s = other.s;

            for(int i = 0; i < s; i++) {

               v[i] = other[i];
            }
         }
      }
      vector(vector<T> &other) {

          this->s = other.s;

	  v = new T[other.s];

         for(int i = 0; i < s; i++) {

            v[i] = other[i];
         }

      }
      ~vector(){
         if(v != NULL) {

   	      delete []v;
         }
      }
	  
      int size() {
          
	     return s;
      }
	  
      void push_back(T ele) {
	     T *temp;
	     temp = new T[++s];
	     for(int i=0; i<s-1; i++)
	        temp[i]=v[i];

	     delete [] v;
	     v=temp;
	     v[s-1]=ele;
      }

      T operator [](int index) {

         return v[index];
      }
      T at(int index) {


         if(index > s-1) {
            throw std:: out_of_range("Out of my vector bounds");

         }
         else {
            return v[index];
         }
      }
      
};
