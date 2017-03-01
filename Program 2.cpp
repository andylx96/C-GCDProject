// Andy Lam. CMPSC 121. Program 6.
// Program to prompt read income from textfile and print out income, tax, and net
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

	cout << "Andy Lam. CMPSC 121. Program 6.\n";
	const int W1 = 12, W2 = 15;
	const double rate1 = .05, rate2 = 0.25, bound1 = 10000, bound2 = 30000;
	double income, net, tax;
	cout << setw(W1) << "Income" << setw(W1) << "Tax" << setw(W2) << "Net" << endl;
	ifsteam txt("income.txt");
	for (int i = 0, i < 10, i++)
		fin >> income;
	if (income <= bound1)
		tax = 0.0;
	net = income;
	else if (income > bound1 && income <= bound2)
		rate = rate1 * (income - bound1);
	net = income - tax;
	else if (income > bound2)
		tax = (rate * (bound2 - bound1)) + (rate2 * (income - bound2));
		net = income - tax;
	cout << fixed << setprecision(2);
	cout << setw(W1) << income << setw(W1) << tax << setw(W2) << net << endl;

	return 0;
}