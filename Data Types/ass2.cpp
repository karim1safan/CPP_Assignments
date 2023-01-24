#include <iostream>
using namespace std;

int main()
{
	double salary = 5000.98;
	cout << sizeof(salary) << " Bytes" << endl;

	// 1 Byte = 8 Bits
	cout << sizeof(salary) * 8 << " Bits" << endl;
	// 8 Bytes
	// 64 Bits
}
