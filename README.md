# Student Record Management System

A beginner-friendly, menu-driven **C++ Object-Oriented Programming (OOP)** project. It allows a user to add student records, display all records, and search for a student using a roll number.

## Features

- Add a student record (roll number, name, course, semester, marks)
- Display all records entered in the current run
- Search for a student by roll number
- Basic validation for roll number, semester, and marks
- Formatted console output
- Uses a `Student` class and `vector<Student>`

## Technologies and concepts

- Language: C++
- Standard: C++11 or later (C++17 recommended)
- Standard library headers: `iostream`, `iomanip`, `vector`, `string`, `limits`
- OOP: class, object, encapsulation, constructors, member functions
- Other concepts: loops, conditionals, input handling, dynamic arrays with `vector`

## Repository structure

```text
student-record-management-system/
├── src/
│   └── Student_Record_Management_System.cpp
├── docs/
│   ├── PROJECT_DETAILS.md
│   ├── TEST_CASES.md
│   ├── VIVA_QUESTIONS.md
│   └── FLOWCHART.md
├── assets/
│   └── (optional screenshots)
├── .gitignore
├── LICENSE
└── README.md
```

## Requirements

- A C++ compiler such as GCC (`g++`), Clang, or MSVC
- Terminal/command prompt or an IDE such as VS Code, Code::Blocks, Dev-C++, or Visual Studio

## Compile and run

Open a terminal in the repository root.

### Linux / macOS

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/Student_Record_Management_System.cpp -o student_record
./student_record
```

### Windows (MinGW)

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/Student_Record_Management_System.cpp -o student_record.exe
student_record.exe
```

## How to use

1. Run the compiled program.
2. Choose `1` to add a student record.
3. Enter roll number, name, course, semester, and marks.
4. Choose `2` to display all records.
5. Choose `3` and enter a roll number to search.
6. Choose `4` to exit.

### Example input

```text
Choice: 1
Roll number: 103
Student name: Nitin Raj
Course: BCA
Semester: 3
Marks: 82.50
```

## Important limitations

- Records are stored in memory only and are lost when the program closes.
- This version does not use a file or database.
- Duplicate roll numbers are not prevented.
- It does not include update, delete, attendance, fee, grade calculation, or login features.
- Input validation is basic; it is intended as an academic demonstration, not an official student database.

## Possible future improvements

- Save and load records using file handling.
- Add update and delete operations.
- Prevent duplicate roll numbers.
- Add stronger validation and input recovery.
- Connect to a database.
- Add login roles and a graphical user interface.

## Documentation

See the [`docs/`](docs/) folder for project details, test cases, viva questions, and a flowchart outline.

## Academic project note

This repository is based on the accompanying project report, *Student Record Management System – A C++ Object-Oriented Programming Project*. Review and test the code yourself before submitting or presenting it.
