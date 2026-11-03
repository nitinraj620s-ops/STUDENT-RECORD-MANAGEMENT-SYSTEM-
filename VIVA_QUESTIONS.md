# Viva Questions and Answers

### 1. What is the project about?
It is a menu-driven C++ program used to add, display, and search student records during one program run.

### 2. What is a class?
A class is a user-defined data type that groups data members and member functions.

### 3. What is an object?
An object is an instance of a class. Here, each student record is a `Student` object.

### 4. What is encapsulation?
Encapsulation combines data and the functions that operate on it, while controlling access to the data.

### 5. Why are the data members private?
They prevent direct access from outside the class. Public member functions provide controlled access.

### 6. What is a constructor?
A constructor is a special member function that initializes an object when it is created.

### 7. What is the difference between default and parameterized constructors?
A default constructor initializes an object without arguments. A parameterized constructor receives values to initialize the object.

### 8. What is a vector?
A vector is a sequence container in the C++ Standard Library that can grow or shrink dynamically.

### 9. Why is `vector<Student>` used?
It stores a flexible number of `Student` objects while the program is running.

### 10. What does `emplace_back()` do?
It constructs a new element at the end of the vector using the supplied arguments.

### 11. What is the use of `getline()`?
It reads a complete line, including spaces, which is useful for student names and course names.

### 12. Why is `cin.ignore()` used?
It discards leftover characters, such as the newline after formatted input, before reading a line with `getline()`.

### 13. What does `displayRecord()` do?
It prints the details of one student in a formatted layout.

### 14. What does `getRollNumber()` do?
It returns the private roll number so the main function can compare it during searching.

### 15. Why are these member functions declared `const`?
The `const` qualifier indicates that the function does not modify the object's data members.

### 16. How does the search operation work?
It loops through the vector and compares each object's roll number with the number entered by the user.

### 17. What happens if no record is present?
The display option prints a message that no student records are available.

### 18. Are records saved permanently?
No. They are stored in memory and are lost when the program closes.

### 19. Which header files are used?
`iostream`, `iomanip`, `vector`, `string`, and `limits`.

### 20. What are the limitations of the project?
It has no permanent storage, database, login, update, delete, attendance, or fee-management features. Duplicate roll numbers are not prevented.

### 21. How can the project be improved?
File handling or a database, update/delete operations, stronger validation, authentication, and a GUI could be added.

### 22. Which loop controls the menu?
A `do-while` loop repeats the menu until the user chooses option 4.
