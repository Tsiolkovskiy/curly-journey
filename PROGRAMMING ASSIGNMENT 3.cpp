//This program will calculate a monthly sales tax report listing sales for the month and the amount of sales tax collected
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double state_taxRate = 0.040, county_taxRate = 0.020, total_taxRate = 0.060, total, sales, county_sales_tax, state_sales_tax, total_sales_tax;
	string month; 
	string year;
	cout <<	"Please enter The Month ";
	cin >> month;
	cout << "Please enter The Year ";
	cin >> year;
	cout << "Please enter Total Amount Collected: ";
	cin >> total;
	sales = total / 1.06;
	county_sales_tax = sales * county_taxRate;
	state_sales_tax = sales * state_taxRate;
	total_sales_tax = sales * total_taxRate;
	cout << "\n Month: " << month <<endl;
	cout << "\n Year: " << year << endl;
	cout << "------------------\n";
	cout << setprecision(2) << fixed;
	cout << "Total Collected: $ " << setw(8) << total << endl;
	cout << "Sales: $ " << setw(8) << sales << endl;
	cout << "County Sales Tax: $ " << setw(8) << county_sales_tax << endl;
	cout << "State Sales Tax: $ " << setw(8) << state_sales_tax << endl;
	cout << "Total Sales Tax: $ " << setw(8) << total_sales_tax << endl; 
	
	return 0;
}
