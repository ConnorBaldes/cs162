CC = g++ -std=c++11
exe_file = drive_app

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): lab_three.o 
	$(CC) lab_three.o -o $(exe_file) $(CFLAGS)
driver.o: lab_three.cpp
	$(CC) -c lab_three.cpp $(CFLAGS)

clean:
	rm -f *.out *.o $(exe_file)

.PHONY:	clean
