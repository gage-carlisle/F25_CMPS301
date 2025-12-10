#include <iostream>
#include <string>
#include <iomanip>  // for setprecision

using namespace std;

int main()
{
    // ---------- INPUT SECTION ----------
    string name, gender;
    int age;
    int heightFeet, heightInches;
    double weight;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your gender (male/female): ";
    cin >> gender;

    cout << "Please enter your height in feet: ";
    cin >> heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weight;


    // ---------- PROCESSING ----------
    int totalInches = (heightFeet * 12) + heightInches;

    double bmi = (703 * weight) / (totalInches * totalInches);

    string meaning;

    if (bmi < 18.5)
        meaning = "Underweight";
    else if (bmi < 25)
        meaning = "Normal weight";
    else if (bmi < 30)
        meaning = "Overweight";
    else
        meaning = "Obesity";


    // ---------- OUTPUT ----------
    cout << fixed << setprecision(1); // 1 decimal place

    cout << "\nHi " << name << ",\n";
    cout << "You are a " << gender << ". You are " << age << " years old.\n";
    cout << "You are currently " << heightFeet << "'" << heightInches
        << "\" and you currently weigh " << weight << " pounds.\n";

    cout << "Your BMI is " << bmi << ", which is " << meaning << ".\n";

    cout << "\nThank you for using the BMI Calculator!\n";

    return 0;
}
