#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    double gpa = 0.0;
    int sat = 0;
    char extracurricular = ' ';

    // Welcome message
    cout << "****** Welcome to the Gage's College Admission checker ******" << endl;

    // Input
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpa;

    cout << "Enter SAT score (out of 1600): ";
    cin >> sat;

    cout << "Participated in extracurriculars? (Y/N): ";
    cin >> extracurricular;

    // Decision variables
    string decision;
    string reason;
    string extraText = (extracurricular == 'Y' || extracurricular == 'y') ? "Yes" : "No";

    if (gpa >= 3.5 && sat >= 1200) {
        decision = "ACCEPTED";
        reason = "Qualified based on high GPA and SAT score.";
    }
    else if (gpa >= 3.0 && sat >= 1000 && (extracurricular == 'Y' || extracurricular == 'y')) {
        decision = "ACCEPTED";
        reason = "Qualified based on GPA, SAT, and extracurriculars.";
    }
    else {
        decision = "NOT ELIGIBLE";
        reason = "Did not meet minimum GPA/SAT or extracurricular requirements.";
    }

    // Output
    cout << "\n============== ADMISSION RESULT ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name:"
        << right << name << endl;
    cout << left << setw(30) << setfill('.') << "GPA:"
        << right << fixed << showpoint << setprecision(2) << gpa << endl;
    cout << left << setw(30) << setfill('.') << "SAT Score:"
        << right << sat << endl;
    cout << left << setw(30) << setfill('.') << "Extracurriculars:"
        << right << extraText << endl;

    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << setfill('.') << "Admission Decision:"
        << right << decision << endl;
    cout << left << setw(30) << setfill('.') << "Reason:"
        << right << reason << endl;
    cout << "=============================================" << endl;
    cout << "Congratulations and best wishes!" << endl;

    return 0;
}
