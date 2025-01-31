#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;


void check_input_int(string, int&, char);
void TopDownMergeSort(int*, int*, int);
void TopDownSplitMerge(int*, int , int , int*);
void CopyArray(int* , int , int , int* );
void TopDownMerge(int* , int , int , int , int* );

int main() {

srand(time(NULL));

int size;

check_input_int("Please input the size of the array: ", size, '9');

int* array = new int[size];

for(int i = 0; i < size; i++) {

    array[i] = (rand() % 50) + 1;

    cout << array[i] << " ";

}

cout << endl;

int* array2 = new int[size];

for(int i = 0; i < size; i++) {

    array2[i] = array[i];
}

int* array3 = new int[size];
TopDownMergeSort(array2, array3, size);

for(int i = 0; i < size; i++) {

    cout << array3[i] << " ";

}

cout << endl;


}
void check_input_int(string message, int &int_input, char range) {

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
        
        int_input = atoi(input.c_str());
        if(int_input > 20) {

            cout << "Array must be less than 20 elements." << endl;

            bad_input = true;
        }
	}while(bad_input);

	

}
void TopDownMergeSort(int source[], int des[], int n)
{
    CopyArray(source, 0, n, des);           // duplicate array A[] into B[]
    TopDownSplitMerge(des, 0, n, source);   // sort data from B[] into A[]
}
void TopDownSplitMerge(int des[], int iBegin, int iEnd, int source[])
{
    if(iEnd - iBegin < 2)                       // if run size == 1
        return;                                 //   consider it sorted
    // split the run longer than 1 item into halves
    int iMiddle = (iEnd + iBegin) / 2;              // iMiddle = mid point
    // recursively sort both runs from array A[] into B[]
    TopDownSplitMerge(des, iBegin,  iMiddle, source);  // sort the left  run
    TopDownSplitMerge(des, iMiddle,    iEnd, source);  // sort the right run
    // merge the resulting runs from array B[] into A[]
    TopDownMerge(source, iBegin, iMiddle, iEnd, des);
}

//  Left source half is A[ iBegin:iMiddle-1].
// Right source half is A[iMiddle:iEnd-1   ].
// Result is            B[ iBegin:iEnd-1   ].
void TopDownMerge(int source[], int iBegin, int iMiddle, int iEnd, int B[])
{
    int i = iBegin, j = iMiddle;
 
    // While there are elements in the left or right runs...
    for (int k = iBegin; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iMiddle && (j >= iEnd || source[i] <= source[j])) {
            B[k] = source[i];
            i = i + 1;
        } else {
            B[k] = source[j];
            j = j + 1;
        }
    }
}

void CopyArray(int A[], int iBegin, int iEnd, int B[])
{
    for(int k = iBegin; k < iEnd; k++)
        B[k] = A[k];
}