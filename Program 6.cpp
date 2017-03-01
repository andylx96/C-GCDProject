// Andy Lam. CMPSC 121. Program B.
// Take a list of ints and find their gcd, total avg, and largest gcds
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int calcGCD(int, int);

int main()
{
	cout << "Andy Lam. CMPSC 121. Program B." << endl;
	ifstream myTxt("answers.txt");
	int gcdArr[100] = { 0 };
	int num1, num2, gcd, largest = 0, counter = 0;
	double avg, sum = 0;
	myTxt >> num1 >> num2;
	do {
		gcd = calcGCD(num1, num2);
		gcdArr[counter] = gcd;
		myTxt >> num1 >> num2;
		counter += 1;
	} while (num1 != -1);
	cout << "The gcd of each pair is : ";

	for (int i = 0; i < counter; i++) {
		cout << gcdArr[i] << " ";
		sum += gcdArr[i];
		if (gcdArr[i] > largest)
			largest = gcdArr[i];
	}
	avg = sum / (counter);
	cout << endl;
	cout << "The average of the gcds is: " << avg << endl;
	cout << "The largest of the gcds is: " << largest << endl;

	return 0;
}

int calcGCD(int x, int y)
{
	int rem;
	do
	{
		rem = x % y;
		x = y;
		y = rem;
	} while (y != 0);
	return x;
}