CC = g++ -std=c++11
exe_file = Assignment_Five

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -lncurses -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): Driver.o 
	$(CC)  Driver.o  -o $(exe_file) $(CFLAGS)

#Linked_List_Node.o: Linked_List_Node.hpp
#	$(CC) -c Linked_List_Node.hpp $(CFLAGS)
#Linked_List.o: Linked_List.hpp
#	$(CC) -c Linked_List.hpp $(CFLAGS)
Driver.o: Driver.cpp
	$(CC) -c Driver.cpp $(CFLAGS)


clean:
	rm -f *.out *.o $(exe_file)

.PHONY: clean
