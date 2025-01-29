
#include "student_db.h"

student* create_student_db(int student_amount) {

	student* student_db = new student[student_amount];
	
	return student_db;
	
}

void get_student_db_info(student* student_db, int i, fstream &fin) {
	
	string tmp_string;

	getline(fin, tmp_string, ' ');
	student_db[i].ID_number = atoi(tmp_string.c_str());
	
	getline(fin, tmp_string, ' ');
	student_db[i].student_first_name = tmp_string;
	
	getline(fin, tmp_string, ' ');
	student_db[i].student_last_name = tmp_string;
	
	getline(fin, tmp_string, ' ');
	student_db[i].major = tmp_string;


//	for(int j = 0; j < i; j++) {

		cout << student_db[1].ID_number;
		cout << student_db[1].student_first_name;
		cout << student_db[1].student_last_name;
		cout << student_db[1].major;
		cout << endl; 
//	}

}

//void delete_student_db_info(studnet* student_db, int student_amoont) {

//	delete [] student_db;

//}


