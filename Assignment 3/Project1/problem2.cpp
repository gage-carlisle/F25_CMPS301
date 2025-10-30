#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Display welcome message
    cout << "****** Welcome to the Monthly Budget & Savings Planner ******" << endl;

    // Declare variables
    double income, rent, utilities, groceries, transportation, savingspercent;

    // ask user
    cout << "Enter your monthly income ($): ";
    cin >> income;

    cout << "Enter your rent or mortgage cost ($): ";
    cin >> rent;

    cout << "Enter your utilities cost ($): ";
    cin >> utilities;

    cout << "Enter your groceries cost ($): ";
    cin >> groceries;

    cout << "Enter your transportation cost ($): ";
    cin >> transportation;

    cout << "Enter your desired savings goal (% of income): ";
    cin >> savingspercent;

    // calculations
    double totalexpenses = rent + utilities + groceries + transportation;
    double savingsgoal = (savingspercent / 100) * income;
    double remainingbal = income - totalexpenses - savingsgoal;

    // Display
    cout << "\n============== MONTHLY BUDGET REPORT ==============" << endl;

    cout << left << setw(30) << setfill('.') << "Monthly Income:"
        << "$" << fixed << showpoint << setprecision(2) << income << endl;

    cout << "----------------------------------------------------" << endl;

    cout << left << setw(30) << setfill('.') << "Rent / Mortgage:"
        << "$" << fixed << setprecision(2) << rent << endl;

    cout << left << setw(30) << setfill('.') << "Utilities:"
        << "$" << fixed << setprecision(2) << utilities << endl;

    cout << left << setw(30) << setfill('.') << "Groceries:"
        << "$" << fixed << setprecision(2) << groceries << endl;

    cout << left << setw(30) << setfill('.') << "Transportation:"
        << "$" << fixed << setprecision(2) << transportation << endl;

    cout << "----------------------------------------------------" << endl;

    cout << left << setw(30) << setfill('.') << "Total Expenses:"
        << "$" << fixed << setprecision(2) << totalexpenses << endl;

    cout << left << setw(30) << setfill('.') << "Savings Goal ("
        << savingspercent << "%):"
        << "$" << fixed << setprecision(2) << savingsgoal << endl;

    cout << left << setw(30) << setfill('.') << "Remaining Balance:"
        << "$" << fixed << setprecision(2) << remainingbal << endl;

    cout << "====================================================" << endl;
    cout << "Smart planning leads to financial freedom!" << endl;

    return 0;
}
