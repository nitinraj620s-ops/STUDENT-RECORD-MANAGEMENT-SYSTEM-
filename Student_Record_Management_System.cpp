#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits>

using namespace std;

class Student {
private:
    int rollNumber;
    string name, course;
    int semester;
    double marks;

public:
    // Default constructor
    Student() {
        rollNumber = 0;
        name = "Not Set";
        course = "Not Set";
        semester = 0;
        marks = 0.0;
    }

    // Parameterized constructor
    Student(int roll, string studentName, string studentCourse,
            int sem, double studentMarks) {
        rollNumber = roll;
        name = studentName;
        course = studentCourse;
        semester = sem;
        marks = studentMarks;
    }

    // Display student details
    void displayRecord() const {
        cout << "\n========================================\n";
        cout << "             STUDENT RECORD\n";
        cout << "========================================\n";
        cout << left << setw(20) << "Roll Number:" << rollNumber << '\n';
        cout << left << setw(20) << "Name:" << name << '\n';
        cout << left << setw(20) << "Course:" << course << '\n';
        cout << left << setw(20) << "Semester:" << semester << '\n';
        cout << fixed << setprecision(2);
        cout << left << setw(20) << "Marks:" << marks << '\n';
        cout << "========================================\n";
    }

    // Getter used to search by roll number
    int getRollNumber() const {
        return rollNumber;
    }
};

int main() {
    vector<Student> students;
    int choice = 0;

    do {
        cout << "\n====== STUDENT RECORD MANAGEMENT SYSTEM ======\n";
        cout << "1. Add student record\n";
        cout << "2. Display all records\n";
        cout << "3. Search student by roll number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1) {
            int roll, semester;
            string name, course;
            double marks;

            cout << "Enter roll number: ";
            if (!(cin >> roll)) {
                cout << "Invalid roll number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter course: ";
            getline(cin, course);

            cout << "Enter semester: ";
            if (!(cin >> semester)) {
                cout << "Invalid semester.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Enter marks (0 to 100): ";
            if (!(cin >> marks)) {
                cout << "Invalid marks.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (roll <= 0 || semester <= 0 || marks < 0 || marks > 100) {
                cout << "Invalid details. Please check the values.\n";
            } else {
                students.emplace_back(roll, name, course, semester, marks);
                cout << "Student record added successfully.\n";
                students.back().displayRecord();
            }

        } else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records available.\n";
            } else {
                for (const Student &student : students) {
                    student.displayRecord();
                }
            }

        } else if (choice == 3) {
            int searchRoll;
            bool found = false;

            cout << "Enter roll number to search: ";
            if (!(cin >> searchRoll)) {
                cout << "Invalid roll number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            for (const Student &student : students) {
                if (student.getRollNumber() == searchRoll) {
                    student.displayRecord();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student record not found.\n";
            }

        } else if (choice == 4) {
            cout << "Thank you for using Student Record Management System.\n";
        } else {
            cout << "Invalid choice. Select 1 to 4.\n";
        }

    } while (choice != 4);

    return 0;
}
