#include <iostream>
using namespace std;

int main()
{
	// Edit Anything Except Values
	short int a = 100;
	double b = 15001500;
	long double c = 100.54565746;

	// Do Not Edit
	cout << sizeof(a) << " Bytes\n"; // 2 Bytes
	cout << sizeof(b) << " Bytes\n"; // 8 Bytes
	cout << sizeof(c) * 2<< " Bytes\n"; // 16 Bytes
	return 0;
}
