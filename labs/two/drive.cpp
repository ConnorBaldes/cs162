#include "student_db.h"

int main() {
	
	fstream fin;

	string temp;
	
	int student_amount;
	
	fin.open("input.txt");
	
	if (!fin.is_open()) {
		
		cout << "Error, unable to open file!" << endl;
		
		return 0;
	}
	else {
		
		getline(fin, temp);

		cout << temp << endl;

		student_amount = atoi(temp.c_str());

		cin.clear();
		
		student* student_db = create_student_db(student_amount);
		
		for(int i = 0; i < student_amount; i++) {

			get_student_db_info(student_db, i, fin);

			fin.ignore();
		
		}
		fin.close();
	}
	
	
	return 0;
}


