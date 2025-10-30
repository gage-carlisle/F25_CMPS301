#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare variables
	int smlqty=0, medqty=0, lrgqty=0;
	double taxrate=0.0;
	double smlprice = 2.25;
	double medprice = 3.00;
	double lrgprice = 3.75;
	//welcome message
	cout << "****** Gages Coffee Shop ******"<< endl;
	//Ask the user
	cout << "Enter number of small coffees: ";
	cin >> smlqty;
	cout << "Enter number of medium coffees: ";
	cin >> medqty;
	cout << "Enter number of large coffees: ";
	cin >> lrgqty;
	cout << "Enter tax rat (%): ";
	cin >> taxrate;
	//calculations
	double smltotal = smlqty * smlprice;
	double medtotal = medqty * medprice;
	double lrgtotal = lrgqty * lrgprice;
	double subtotal = smltotal + medtotal + lrgtotal;
	double taxamount = (taxrate / 100) * subtotal;
	double total = subtotal + taxamount;
	//display
	cout << "\n========================= Receipt =========================" << endl;
	
	cout << left << setw(35) << setfill('.') << "Small Coffees ("<< smlqty << " x $" << smlprice << "):" << right << "$" << fixed << showpoint << setprecision(2) << smltotal << endl;
	cout << left << setw(35) << setfill('.') << "Medium Coffees ("<< medqty << " x $" << medprice << "):" << right << "$" << fixed << showpoint << setprecision(2) << medtotal << endl;
	cout << left << setw(35) << setfill('.') << "Large Coffees ("<< lrgqty << " x $" << lrgprice << "):" << right << "$" << fixed << showpoint << setprecision(2) << lrgtotal << endl;

	cout << "--------------------------------------------------------------" << endl;

	cout << left << setw(35) << setfill('.') << "Subtotal:" << right << "$" << fixed
		<< showpoint << setprecision(2) << subtotal << endl;
	cout << left << setw(35) << setfill('.') << "Tax (" << taxrate << "%):" << right << "$" << fixed
		<< showpoint << setprecision(2) << taxamount << endl;

	cout << "--------------------------------------------------------------" << endl;

	cout << left << setw(35) << setfill('.') << "Total Amount Due:" << right << "$" << fixed
		<< showpoint << setprecision(2) << total << endl;
	
	cout << "=============================================================" << endl;
	cout << "Thank you for supporting us" << endl;

	return 0;
}