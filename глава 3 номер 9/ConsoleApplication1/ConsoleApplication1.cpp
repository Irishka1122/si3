

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a == 0)
		cout << "нолик";
	else
		if (a == 1)
			cout << "один";
		else
			if (a == 2)
				cout << "два";
			else if (a == 3)
				 cout << "три";
			else
				if (a == 4)
					cout << "четыре";
				else
					cout << "Я не знаю такого числа.";
}

