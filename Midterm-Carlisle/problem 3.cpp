#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    double score1 = 0.0, score2 = 0.0, score3 = 0.0;
    double average = 0.0;
    string letterGrade;

    // Welcome message
    cout << "****** Welcome to the Grade Analyzer ******" << endl;

    // Input 
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter score for Assignment 1: ";
    cin >> score1;

    cout << "Enter score for Assignment 2: ";
    cin >> score2;

    cout << "Enter score for Assignment 3: ";
    cin >> score3;

    // Calculate final average
    average = (score1 + score2 + score3) / 3.0;

    // Determine letter grade
    if (average >= 97)
        letterGrade = "A+";
    else if (average >= 93)
        letterGrade = "A";
    else if (average >= 90)
        letterGrade = "A-";
    else if (average >= 87)
        letterGrade = "B+";
    else if (average >= 83)
        letterGrade = "B";
    else if (average >= 80)
        letterGrade = "B-";
    else if (average >= 77)
        letterGrade = "C+";
    else if (average >= 73)
        letterGrade = "C";
    else if (average >= 70)
        letterGrade = "C-";
    else if (average >= 60)
        letterGrade = "D";
    else
        letterGrade = "F";

    // Output 
    cout << "\n============== FINAL GRADE REPORT ==============" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name:"
        << right << name << endl;
    cout << left << setw(30) << setfill('.') << "Assignment 1:"
        << right << fixed << showpoint << setprecision(2) << score1 << endl;
    cout << left << setw(30) << setfill('.') << "Assignment 2:"
        << right << fixed << showpoint << setprecision(2) << score2 << endl;
    cout << left << setw(30) << setfill('.') << "Assignment 3:"
        << right << fixed << showpoint << setprecision(2) << score3 << endl;

    cout << "-----------------------------------------------" << endl;

    cout << left << setw(30) << setfill('.') << "Final Average:"
        << right << fixed << showpoint << setprecision(2) << average << endl;
    cout << left << setw(30) << setfill('.') << "Final Grade:"
        << right << letterGrade << endl;

    cout << "=================================================" << endl;
    cout << "Keep up the great work!" << endl;

    return 0;
}
