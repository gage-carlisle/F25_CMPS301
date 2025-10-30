#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare variables
	int rentdays = 0, mileallow = 0, miledriven = 0;
	double dailyrate = 0.0, insurancedaily = 0.0, overmilecharge = 0;
	//welcome message
	cout << "************ Welcome to Gage's Car Rental ************" << endl;
	//ask the user
	cout << "Enter number of rental days: ";
	cin >> rentdays;
	cout << "Enter daily rental rate ($): ";
	cin >> dailyrate;
	cout << "Enter insurance per day ($): ";
	cin >> insurancedaily;
	cout << "Enter total miles driven: ";
	cin >> miledriven;
	cout << "Enter milage allowance per day: ";
	cin >> mileallow;
	cout << "Enter over-mileage charge per mile ($): ";
	cin >> overmilecharge;
	//calculations
	double basecost = rentdays * dailyrate;
	double insurancecost = rentdays * insurancedaily;
	int milelimit = rentdays * mileallow;
	int excessmile = miledriven > milelimit ? (miledriven - milelimit) : 0;
	double overagefee = excessmile * overmilecharge;
	double totalcost = basecost + insurancecost + overagefee;

	//display
	cout << "\n============ Car Rental Invoice ============" << endl;

	cout << "Rental Days: " << rentdays << endl;
	cout << "Daily Rate: $" << fixed << showpoint << setprecision(2) << dailyrate << endl;
	cout << "Insurance per Day: $" << fixed << setprecision(2) << insurancedaily << endl;
	cout << "----------------------------------------------" << endl;

	cout << left << setw(25) << setfill('.') << "Base Cost:" << "$" << fixed << setprecision(2) << basecost << endl;
	cout << left << setw(25) << setfill('.') << "Insurance Cost:" << "$" << fixed << setprecision(2) << insurancecost << endl;
	cout << left << setw(25) << setfill('.') << "Mileage Limit:" << milelimit << " miles" << endl;
	cout << left << setw(25) << setfill('.') << "Miles Driven:" << miledriven << " miles" << endl;
	cout << left << setw(25) << setfill('.') << "Excess Miles:" << excessmile << " miles" << endl;
	cout << left << setw(25) << setfill('.') << "Overage Fee:" << "$" << fixed << setprecision(2) << overagefee << endl;

	cout << "-----------------------------------------------" << endl;

	cout << left << setw(25) << setfill('.') << "Total Cost:" << "$" << fixed << setprecision(2) << totalcost << endl;

	cout << "===============================================" << endl;
	cout << "Thank you for choosing our rental service!" << endl;

	return 0;
}