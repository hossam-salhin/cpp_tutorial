# C++ Tutorial 🚀

A structured C++ tutorial repository built as part of my journey toward **ROS2** and embedded systems development. Each section contains well-commented examples that cover core C++ concepts from basics to advanced topics.

-----

## 📁 Repository Structure

```
c++/
├── 01_basics/
├── 02_pointers/
├── 03_arrays/
├── 04_lambda_expression/
└── 05_iterators/
```

-----

## 📚 Topics Covered

### 01 — Basics

Fundamental C++ concepts with practical examples.

|File                      |Description                                                                  |
|--------------------------|-----------------------------------------------------------------------------|
|`sum_2_num.cpp`           |Sum and multiplication of two numbers                                        |
|`largest_smallest_num.cpp`|Find largest and smallest of 3 integers                                      |
|`implicit_casting.cpp`    |Implicit type conversion between int, char, double                           |
|`explicit_casting.cpp`    |Explicit casting using C-style and `static_cast`                             |
|`string_example.cpp`      |String operations and input validation                                       |
|`namespace.cpp`           |Namespaces applied to sensor data (Temp, Pressure, Humidity)                 |
|`robot_distance.cpp`      |Distance calculator using speed × time                                       |
|`mini_program.cpp`        |Menu-driven program with logging to file using `enum`, `struct`, and file I/O|

-----

### 02 — Pointers

Deep dive into pointers, references, and memory management.

|File                      |Description                                                       |
|--------------------------|------------------------------------------------------------------|
|`01_basics.cpp`           |Pointers vs references — swap function using both                 |
|`02_ptr_and_variables.cpp`|Pointer sizes and addresses for different types                   |
|`03_ptr_to_function.cpp`  |Function pointers and callbacks                                   |
|`04_ptr_and_string.cpp`   |Pointers with C-style strings and null terminator                 |
|`05_dynamic_memory.cpp`   |Heap allocation with `new`/`delete`, memory leak prevention       |
|`06_vectors.cpp`          |`std::vector` — dynamic arrays, `push_back`, `pop_back`, `reserve`|

-----

### 03 — Arrays

C-style arrays vs modern C++ arrays, with practical problem solving.

|File                 |Description                                                   |
|---------------------|--------------------------------------------------------------|
|`01_arr_basics.cpp`  |C-style array vs `std::array` with input/output functions     |
|`02_assign_arr.cpp`  |Dynamic-size array with input validation and linear search    |
|`03_reversed_arr.cpp`|Reverse array using iterators inside a namespace              |
|`04_two_sum.cpp`     |Two-pointer algorithm to find two numbers that sum to a target|

-----

### 04 — Lambda Expressions

Anonymous functions with capture lists.

|File           |Description                                                 |
|---------------|------------------------------------------------------------|
|`01_basics.cpp`|Lambda syntax, capture by value `[=]` and by reference `[&]`|

-----

### 05 — Iterators

Traversal and algorithms using STL iterators.

|File               |Description                                                     |
|-------------------|----------------------------------------------------------------|
|`01_it_basics.cpp` |Iterator basics — input, double, and print array elements       |
|`02_sort_array.cpp`|Sorting with `std::sort`, custom comparator, and `std::function`|

-----

## 🛠️ How to Build and Run

### Requirements

- g++ compiler (C++17 or later)
- Linux / macOS / WSL

### Compile and Run

```bash
g++ -std=c++17 filename.cpp -o output
./output
```

**Example:**

```bash
g++ -std=c++17 c++/01_basics/robot_distance.cpp -o robot_distance
./robot_distance
```

-----

## 🎯 Goal

This repository is part of my preparation for **ROS2** development and embedded systems. The topics here build the C++ foundation needed before moving into:

- Object-Oriented Programming (OOP)
- STL (Standard Template Library)
- Templates
- ROS2 nodes and publishers/subscribers

-----

## 🗺️ Roadmap

- [x] Basics & Type Casting
- [x] Pointers & Memory Management
- [x] Arrays & Algorithms
- [x] Lambda Expressions
- [x] Iterators & Sorting
- [ ] Object-Oriented Programming (Classes, Inheritance, Polymorphism)
- [ ] STL (map, set, queue, stack)
- [ ] Templates
- [ ] ROS2 Integration Examples

-----

## 👤 Author

**Hossam Salhin**
GitHub: [@hossam-salhin](https://github.com/hossam-salhin)