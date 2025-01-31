CC = g++ -std=c++11
exe_file = Assignment_Two

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): Pizza.o Menu.o Restaurant.o Driver.o
	$(CC) Pizza.o Menu.o Restaurant.o Driver.o -o $(exe_file) $(CFLAGS)
Pizza.o: Pizza.cpp
	$(CC) -c Pizza.cpp $(CFLAGS)
Menu.o: Menu.cpp
	$(CC) -c Menu.cpp $(CFLAGS)
Restaurant.o: Restaurant.cpp
	$(CC) -c Restaurant.cpp $(CFLAGS)
Driver.o: Driver.cpp
	$(CC) -c Driver.cpp $(CFLAGS)

clean:
	rm -f *.out *.o $(exe_file)

.PHONY: clean
