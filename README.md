# CS162: Introduction to Computer Science II

CS162 provides an in-depth overview of fundamental computer science concepts, focusing on essential programming techniques and the application of software engineering principles. Throughout the course, you will engage with various topics such as file input/output, object-oriented programming, algorithm analysis, recursion, sorting, and searching. Emphasis is also placed on debugging, testing, and designing efficient programs with linear data structures.

## Key Course Topics:
- File Input/Output
- Object-Oriented Programming (OOP)
- Program Design, Debugging, and Testing
- Algorithm Analysis and Complexity
- Recursion
- Sorting and Searching Algorithms
- Linear Data Structures (Arrays, Stacks, Queues, Linked Lists)

## Course Objectives:
- Design and implement programs utilizing multiple classes and inheritance
- Understand abstraction, modularity, and separation of concerns
- Work with linear structures such as arrays, stacks, queues, and linked lists
- Classify algorithms based on complexity classes (O(1), O(log n), O(n), O(n log n), O(n^2))
- Develop recursive and iterative algorithms
- Create comprehensive test-data sets and plans for program validation

This repository contains code for several projects and labs completed during the course, organized as follows:

- **Projects:**  
    - [`cpp_linked_lists`](./projects/cpp_linked_lists/)
    - [`hunt_the_wumpus`](./projects/hunt_the_wumpus/)
    - [`pizza_portal`](./projects/pizza_portal/)
    - [`zoo_tycoon`](./projects/zoo_tycoon/)
- **Labs:**
    - [`two`](./labs/three/), [`three`](./labs/three/),[`four`](./labs/four/),[`six`](./labs/six/),[`seven`](./labs/seven/),[`eight`](./labs/eight/),  [`nine`](./labs/nine/)  
    - [`prof_practice`](./labs/prof_practice/) (A personal implementation for the Proficiency Exam, focusing on OOP)

Each subfolder under 'projects' and 'labs' holds the code for its respective task, showcasing the application of the concepts covered in the course.


# Projects

### Table of Contents

1. [The Pizza Portal](#the-pizza-portal)
2. [Zoo Tycoon](#zoo-tycoon)
3. [Hunt The Wumpus](#hunt-the-wumpus)
4. [C++ Linked List Implementation](#c-linked-list-implementation)


All projects in this repository are implemented in C++ and adhere to the following guidelines:
- **C++ Version**: C++11 or later functionality is used. The Makefile is configured to compile the code with the flag `-std=c++11`.
- **Programming Style/Comments**: Proper indentation and spacing are used throughout. All functions and classes are documented with comments, and this program header is included in each file:

    ```cpp
    /******************************************************
    ** Program: pizza_portal.cpp
    ** Author: Your Name
    ** Date: 04/16/2019
    ** Description:  
    ** Input:
    ** Output:
    ******************************************************/
    ```


## [The Pizza Portal](./projects/pizza_portal/)

Simulate the functionality of a pizza ordering site with user interaction for both customers and employees. This program allows customers to place orders, search the menu by ingredients or price, and view restaurant details. Employees can log in to manage the menu, restaurant hours, and customer orders.

### Tasks:
- Prompt the user to identify as a customer or employee.
- Implement login functionality for employees to manage menu and orders.
- Allow customers to search for pizzas by ingredients or price and place orders.
- Provide options to view the menu, restaurant hours, address, and phone number.
- Save updates to the menu, orders, and restaurant information to files.

### Key Features:
- Employees can change restaurant hours, manage the menu, and view/remove orders.
- Customers can search for pizzas by cost and ingredients, and place orders based on search results.
- The program reads and writes data to files: `menu.txt`, `employee.txt`, `restaurant_info.txt`, and `orders.txt`.
- File data is loaded on startup and saved after any updates.

### Implementation Details:
- Implemented with multiple classes such as `Restaurant`, `Menu`, `Pizza`, `employee`, and `hours`.
- Uses modular design with separate `.h` and `.cpp` files for each class.
- Each class has accessor functions, mutator functions, constructors, copy constructors, assignment operator overload, and destructors where necessary.
- Includes a Makefile for compiling the program with C++11 functionality.

## [Zoo Tycoon](./projects/zoo_tycoon/)

The goal of this assignment is to work with inheritance in C++ while simulating the management of a zoo. As the owner, the player is tasked with ensuring the welfare of the animals and maximizing profit. The player accomplishes these goals by investing in animals, feeding them, caring for them when they are sick, and raising their babies when they are born.

### Tasks:
- Manage animals' welfare and profit by handling investments, sickness, births, and food costs.
- Purchase animals and maintain the zoo’s population, balancing profits and expenses.
- Handle random events such as sickness, births, and zoo attendance booms each week.
- Track animal traits, such as age, cost, food expenses, and revenue generation.

### Key Features:
- Different species of animals with unique traits (e.g., cost, food expenses, revenue generation).
- Special events like sickness, births, and attendance booms impact the game flow.
- Player can purchase animals and must manage feeding costs to keep the zoo profitable.
- Animals less than 5 weeks old generate double the revenue and cost double when sick.
- The game ends if the player runs out of money.

### Implementation Details:
- Classes for `Zoo`, `Animal`, `Monkey`, `SeaOtter`, and `Meerkat`.
- Inheritance is used where `Monkey`, `SeaOtter`, and `Meerkat` inherit from the `Animal` class.
- The zoo's exhibit is represented as a dynamically-allocated array of the appropriate animal class.
- The player manages the zoo in weekly turns, tracking bank balance, animal numbers, and special events.
- The program follows a game flow where each week consists of aging animals, processing events, and managing purchases.

### Additional Requirements:
- Handle game events, including animal sickness and births.
- Track and update weekly revenue, food costs, and animal population.
- Implement memory management to avoid leaks, using proper memory allocation and deallocation.
- The program must be structured with separate header and implementation files for each class.
- A Makefile must be included for compiling the program with C++11 functionality.


## [Hunt the Wumpus](./projects/hunt_the_wumpus/)

The goal of this assignment is to work with polymorphism and C++ template classes from the Standard Template Library (STL). In this game, the player guides an adventurer through a dangerous cave to hunt the Wumpus, find its hidden gold, and escape alive. The game involves navigating a grid of rooms, each with its own potential hazards or treasures.

### Tasks:
- Move the adventurer through a cave represented as a grid of rooms.
- Fire arrows to hunt the Wumpus, or navigate to avoid danger.
- Handle events like bottomless pits, super bats, and the Wumpus itself.
- Collect gold and safely escape after completing the mission.

### Key Features:
- **Cave Representation**: A grid of rooms, where the player must navigate to kill the Wumpus, collect gold, and escape.
- **Adventurer Actions**: The player can move or fire arrows to interact with the cave's events.
- **Hazards**: The cave contains bottomless pits, super bats, and the Wumpus. Players must avoid or deal with these hazards.
- **Debug Mode**: Optionally display all event locations for debugging.
- **Polymorphism**: The game uses polymorphism to handle different types of events (Wumpus, bats, pits, and gold) with a base `Event` class.

### Implementation Details:
- **Classes**: `Room`, `Event`, `Wumpus`, `Bats`, `Pit`, `Gold` (inherited from `Event`).
- **Event Class**: An abstract base class for different types of events with methods like `percept()` and `encounter()`. Each derived class implements its own versions of these methods.
- **Cave Grid**: The cave is a square grid represented by `std::vector`, where each room can contain an event or be empty.
- **Game Flow**: The player starts in a random room and must navigate through the cave to kill the Wumpus, collect gold, and return to the escape rope.
- **Command-Line Parameters**: The size of the grid and a debug mode flag are specified by the user.
- **Movement and Actions**: The player moves using WASD keys and fires arrows by typing specific commands.
- **Event Triggers**: When near an event, the player receives a percept (e.g., smell of the Wumpus, flapping of wings from bats).
- **Memory Management**: Proper memory allocation and deallocation to avoid memory leaks.

### Additional Requirements:
- Handle events like the Wumpus waking up and moving after an arrow is fired.
- Properly display the cave grid with the player's position, and indicate percepts based on nearby events.
- Implement a debugging mode that shows all event locations and the player's current position.
- Use polymorphism for event handling: each room contains a pointer to an `Event` object.
- Follow the Big 3 rules (destructor, copy constructor, assignment operator) for proper object management.

### Extra Credit (Optional):
- **(4 points)** Implement WASD controls that allow the user to move without needing to press "Enter" after each move (simplified for extra credit).

### Program Requirements:
- **Grid Size**: The cave grid size should be specified as a command-line parameter (minimum 4x4).
- **Debug Mode**: A second command-line parameter should control whether debug mode is active (either `true` or `false`).
- **Grid Visualization**: Display the grid, with the adventurer's position indicated.
- **Arrow Firing**: The adventurer can fire an arrow in one of four directions (north, south, east, or west).
- **Cave Events**: Bottomless pits, super bats, and the Wumpus are the key hazards in the cave.
- **Winning Condition**: The game ends when the player kills the Wumpus and safely escapes, either with or without the gold.


## [C++ Linked List Implementation](./projects/cpp_linked_lists/)

The goal of this assignment is to implement a linked list class using pointers and object-oriented programming. By completing this assignment, you will gain a deeper understanding of the differences between arrays and linked lists, and how data structures affect the performance of a program.

### Tasks:
- Implement a linked list to store signed integers (`int`) using pointers.
- Implement various functions to manipulate the linked list, including insertion, deletion, and sorting.
- Use the Merge Sort algorithm to sort the linked list in ascending order.
- Count the number of prime numbers in the list.
- Build a simple application to interact with the linked list, where the user can input numbers, sort them, and count the prime numbers.

### Required Classes:
- **Linked_List_Node**: A class representing a node in the linked list, which contains an integer value and a pointer to the next node.
  - `int val;` (the value the node stores)
  - `Linked_List_Node *next;` (pointer to the next node in the list)

- **Linked_List**: A class representing the linked list itself, which supports various operations like insertion, sorting, and clearing the list.
  - `int get_length();` (returns the length of the list)
  - `void print();` (prints all integers in the list)
  - `void clear();` (deletes all nodes and resets the length to 0)
  - `unsigned int push_front(int);` (inserts a new value at the front of the list)
  - `unsigned int push_back(int);` (inserts a new value at the back of the list)
  - `unsigned int insert(int, unsigned int);` (inserts a value at a specified index)
  - `void sort_ascending();` (sorts the list in ascending order using recursive Merge Sort)
  - `void sort_descending();` (sorts the list in descending order)

### Additional Functions:
- Implement a function to count the number of prime numbers in the list.

### Application Description:
Once you have implemented the linked list, create an application to allow the user to interact with the list. The program should replicate the following behavior:

1. Prompt the user to enter integers and store them in the linked list.
2. Ask if the user wants to enter another number.
3. Once the user finishes input, allow them to choose whether to sort the list in ascending or descending order.
4. Print the sorted list and display the number of prime numbers in it.
5. Ask if the user wants to perform another operation.

**Example User Interaction:**
```
Please enter a number: 146
Do you want another num (y or n): y
Enter a number: 30
Do you want another num (y or n): y
Enter a number: 73
Do you want another num (y or n): y
Enter a number: 10
Do you want another num (y or n): y
Enter a number: -31
Do you want another num (y or n): n
Sort ascending or descending (a or d)? a
Your linked list is: -31 10 30 73 146
You have 1 prime number(s) in your list.
Do you want to do this again (y or n)? n
```

### Additional Requirements:
- **Sorting**: When sorting, do not swap values between nodes. Instead, modify the node pointers to swap the nodes.
- **Memory Management**: Properly manage memory and ensure there are no memory leaks. Use Valgrind for testing.
- **Big 3**: Implement the Big 3 (destructor, copy constructor, and assignment operator) as necessary.
- **Program Structure**: The program should have separate header and implementation files for the `Linked_List` and `Linked_List_Node` classes, and a separate application file containing the main function.
- **Makefile**: Provide a working Makefile to compile the program.

### Extra Credit (Optional):
- **(5 points)** Implement the assignment using a template class. Use the template class to implement the linked list for both `int` and `unsigned int` types. Allow the user to choose between the two types at runtime. If implemented correctly, the program should handle large prime numbers (such as 4294963943) in the `unsigned int` version.
