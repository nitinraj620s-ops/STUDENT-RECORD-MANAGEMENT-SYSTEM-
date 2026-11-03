# Project Details

## 1. Project overview

The Student Record Management System is a console-based C++ application for maintaining basic student details during one program session. A record contains a roll number, student name, course, semester, and marks.

## 2. Problem statement

Manually maintained student details can be inconvenient to search and present consistently. This project demonstrates a small menu-driven program that accepts records, displays them, and searches by roll number.

## 3. Objectives

- Represent a student record using a C++ class.
- Apply encapsulation using private data members.
- Initialize objects with default and parameterized constructors.
- Store multiple objects in a `vector`.
- Add, display, and search student records.
- Practise input/output, loops, conditions, strings, and formatted output.

## 4. Functional requirements

1. Accept roll number, name, course, semester, and marks.
2. Add a valid record to the in-memory collection.
3. Display all records currently stored.
4. Search for a record by roll number.
5. Provide an exit option.
6. Reject non-positive roll numbers and semesters, and marks outside 0–100.

## 5. OOP concepts

| Concept | How it is used |
|---|---|
| Class | `Student` defines the structure and operations of a student record. |
| Object | Each student entry is an object of `Student`. |
| Encapsulation | Data members are private and accessed through public member functions. |
| Default constructor | Initializes a `Student` object with default values. |
| Parameterized constructor | Initializes an object with entered student details. |
| Member function | `displayRecord()` displays a record; `getRollNumber()` returns its roll number. |

## 6. Main program components

- **Student class:** stores roll number, name, course, semester, and marks.
- **Record creation:** `students.emplace_back(...)` constructs and stores a new object.
- **Record display:** a range-based `for` loop calls `displayRecord()` for each object.
- **Search:** compares the entered roll number with `getRollNumber()`.
- **Menu:** a `do-while` loop repeats until the user chooses Exit.
- **Input handling:** clears invalid menu input and checks selected numeric fields.

## 7. Data storage

The program uses `vector<Student> students`. The vector grows as records are added, but it exists only while the application is running. No permanent file or database storage is implemented.

## 8. Scope and limitations

This is an educational prototype. It is not intended to store official or sensitive institutional records. It does not include authentication, permanent storage, editing, deletion, attendance, fee management, or database connectivity.

## 9. Future scope

File handling, database connectivity, update/delete features, duplicate-roll-number checks, grade calculation, attendance, report generation, login security, and a GUI could be considered in later versions.
