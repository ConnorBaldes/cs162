
CC = g++ -std=c++11
exe_file = Assignment_Four

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): Zoo.o Animal.o Monkey.o Meerkat.o Sea_otter.o Driver.o
	$(CC) Zoo.o Animal.o Monkey.o Meerkat.o Sea_otter.o Driver.o -o $(exe_file) $(CFLAGS)
Zoo.o: Zoo.cpp
	$(CC) -c Zoo.cpp $(CFLAGS)
Animal.o: Animal.cpp
	$(CC) -c Animal.cpp $(CFLAGS)
Monkey.o: Monkey.cpp
	$(CC) -c Monkey.cpp $(CFLAGS)
Meerkat.o: Meerkat.cpp
	$(CC) -c Meerkat.cpp $(CFLAGS)
Sea_otter.o: Sea_otter.cpp
	$(CC) -c Sea_otter.cpp $(CFLAGS)
Driver.o: Driver.cpp
	$(CC) -c Driver.cpp $(CFLAGS)

clean:
	rm -f *.out *.o $(exe_file)

.PHONY: clean
