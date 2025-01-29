CC = g++ -std=c++11
exe_file = drive_app

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): drive.o student_db.o
	$(CC) drive.o student_db.o -o $(exe_file) $(CFLAGS)
driver.o: drive.cpp
	$(CC) -c drive.cpp $(CFLAGS)
student_db.o: student_db.cpp
	$(CC) -c student_db.cpp $(CFLAGS)

clean:
	rm -f *.out *.o $(exe_file)

.PHONY:	clean
