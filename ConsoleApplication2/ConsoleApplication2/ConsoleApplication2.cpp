

#include <iostream>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <double> ch;
	int N;
	double sum = 0;
	string c;
	cin >> c;
	while (c!= "|") {
		ch.push_back(atof(c.c_str()));
		cin >> c;
	}
	cout << "Введите количество чисел, которые хотите проссумировать"<<endl;
	cin >> N;
	try {
		if (ch.size() >= N) {
			for (int i = 0; i <= N - 1; i++) {
				cout << ch[i] << ' ';
				sum += ch[i];
			}
			cout << "Сумма первых " << N << " чисел равна " << sum;
		}
		else error("Недостаточно чисел.");
	}
	catch (runtime_error) {
		cout << "1";
	};
}

