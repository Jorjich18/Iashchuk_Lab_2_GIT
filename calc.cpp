#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, op, b;
	double result;
	cout << "Input first number: "; cin >> a;
	cout << "Input number of operation: \n1\t+\n2\t-\n3\t*\n4\t/\n5\t**\n"; cin >> op;
	cout << "Input second number: "; cin >> b;
	switch (op)
	{
	case 1: result = a + b; break;
	case 2: result = a - b; break;
	case 3: result = a * b; break;
	case 4: result = a / b; break;
	case 5: result = pow(a, b); break;
	}
	cout << "Answer: " << result << endl;
	return 0;
}