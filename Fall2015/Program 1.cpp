// Andy Lam. CMPSC 121. Program 1.
// Program to prompt for two intergers, and print their sum
#include <iostream>
using namespace std;

int main()
{

	cout << "Andy Lam. CMPSC 121. Program 1.\n";
	int x, y, perimeter, ;
	cout << "Please enter length of the rectangle:";
	cin >> x;
	cout << "Please enter width of the rectangle:";
	cin >> y;
	perimeter = (x * 2) + (y * 2);
	cout << "The retangle's perimeter is:" << perimeter << endl;

	return 0;
}