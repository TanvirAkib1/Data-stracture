#include <iostream>
using namespace std;

int main() {
    const int MAX_STUDENTS = 100; // maximum number of students
    int num_students; // actual number of students
    int marks[MAX_STUDENTS]; // array to hold the marks of each student
    int rank[MAX_STUDENTS]; // array to hold the ranking of each student

    // input the number of students
    cout << "Enter the number of students: ";
    cin >> num_students;

    // input the marks for each student
    for (int i = 0; i < num_students; i++) {
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> marks[i];
        rank[i] = 1; // initialize the rank to 1
    }

    // calculate the ranking for each student
    for (int i = 0; i < num_students; i++) {
        for (int j = i+1; j < num_students; j++) {
            if (marks[i] < marks[j]) {
                rank[i]++;
            } else if (marks[i] > marks[j]) {
                rank[j]++;
            }
        }
    }

    // print the ranking for each student
    cout << "Rankings:\n";
    for (int i = 0; i < num_students; i++) {
        cout << "Student " << i+1 << ": " << rank[i] << "\n";
    }

    return 0;
}
