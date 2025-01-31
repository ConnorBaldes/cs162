#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>


using namespace std;

struct student {
	
	int ID_number;
	string student_first_name;
	string student_last_name;
	string major;
};

student* create_student_db(int);


void get_student_db_info(student*, int, fstream &);

//void delete_student_db_info(studnet**, int);


