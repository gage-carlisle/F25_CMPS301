#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    double x, y;
    char again = 'Y';

    cout << "Welcome to the Basic Math Calculator!\n";

    while (again == 'Y' || again == 'y')
    {
        cout << "\nEnter the operation you want to use\n";
        cout << "(+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
        cin >> operation;

        // ---- OPERATIONS THAT REQUIRE ONE VALUE ----
        if (operation == "sin" || operation == "asin" || operation == "cos" || operation == "acos" ||
            operation == "tan" || operation == "atan" || operation == "sqrt" || operation == "ceil" ||
            operation == "abs" || operation == "floor" || operation == "log" || operation == "log10" ||
            operation == "log2" || operation == "round")
        {
            cout << "Enter a number: ";
            cin >> x;

            if (operation == "sin")       cout << "Result: " << sin(x);
            else if (operation == "asin") cout << "Result: " << asin(x);
            else if (operation == "cos")  cout << "Result: " << cos(x);
            else if (operation == "acos") cout << "Result: " << acos(x);
            else if (operation == "tan")  cout << "Result: " << tan(x);
            else if (operation == "atan") cout << "Result: " << atan(x);
            else if (operation == "sqrt") cout << "Result: " << sqrt(x);
            else if (operation == "ceil") cout << "Result: " << ceil(x);
            else if (operation == "abs")  cout << "Result: " << fabs(x);
            else if (operation == "floor")cout << "Result: " << floor(x);
            else if (operation == "log")  cout << "Result: " << log(x);
            else if (operation == "log10")cout << "Result: " << log10(x);
            else if (operation == "log2") cout << "Result: " << log2(x);
            else if (operation == "round")cout << "Result: " << round(x);
        }

        // ---- OPERATIONS THAT REQUIRE TWO VALUES ----
        else
        {
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;

            if (operation == "+")          cout << "Result: " << x + y;
            else if (operation == "-")     cout << "Result: " << x - y;
            else if (operation == "*")     cout << "Result: " << x * y;
            else if (operation == "/")
            {
                if (y == 0) cout << "Error: Cannot divide by zero";
                else cout << "Result: " << x / y;
            }
            else if (operation == "%")
            {
                cout << "Result: " << fmod(x, y);  // modulus for doubles
            }
            else if (operation == "^")     cout << "Result: " << pow(x, y);
            else if (operation == "atan2") cout << "Result: " << atan2(x, y);
            else if (operation == "max")   cout << "Result: " << fmax(x, y);
            else if (operation == "min")   cout << "Result: " << fmin(x, y);
            else cout << "Invalid operation.\n";
        }

        // ---- ASK TO CONTINUE ----
        cout << "\n\nWould you like to solve another problem? (Y/N): ";
        cin >> again;
    }

    cout << "Thanks for using the Basic Math Calculator!\n";

    return 0;
}
