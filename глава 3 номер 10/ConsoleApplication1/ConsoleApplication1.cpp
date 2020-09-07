

#include <iostream>
using namespace std;

int main()
{
	string operation;
	double a, b;
	cin >> operation >> a >> b;
	if (operation == "+" or operation == "plus")
		cout << a + b;
	if (operation == "-" or operation == "minus")
		cout << a - b;
	if (operation == "*" or operation == "mul")
		cout << a * b;
	if (operation == "/" or operation == "div")
		cout << a / b;
}


