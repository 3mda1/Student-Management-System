#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int id;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student ID: ";
    cin >> s.id;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name 
             << " | ID: " << students[i].id << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            addStudent();
        else if (choice == 2)
            displayStudents();

    } while (choice != 0);

    return 0;
}
