CC = g++ -std=c++11
exe_file = Lab_seven

# Handle debug case
DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS := -g -Wall
else
	CFLAGS := -DNDEBUG -O3
endif

$(exe_file): Shape.o circle.o rectangle.o Application.o 
	$(CC) Shape.o circle.o rectangle.o Application.o -o $(exe_file) $(CFLAGS)
Shape.o: Shape.cpp
	$(CC) -c Shape.cpp $(CFLAGS)
rectangle.o: rectangle.cpp
	$(CC) -c rectangle.cpp $(CFLAGS)
circle.o: circle.cpp
	$(CC) -c circle.cpp $(CFLAGS)
Application.o: Application.cpp
	$(CC) -c Application.cpp $(CFLAGS)	
clean:
	rm -f *.out *.o $(exe_file)

.PHONY: clean
