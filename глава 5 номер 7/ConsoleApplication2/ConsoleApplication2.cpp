

#include <iostream>
#include <vector>
using namespace std;
class bad_arguments {};

vector <double> roots(int a,int b,int c) {
	vector <double> m;
	int d = b * b - 4 * a * c;
	if (d > 0) {
		m.push_back((-b - sqrt(d)) / (2 * a));
		m.push_back((-b + sqrt(d)) / (2 * a));
		return m;
	}
	if (d == 0) {
		m.push_back((-b ) / (2 * a));
		return m;
	}
	if (d < 0) {
		throw bad_arguments();
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	vector <double> res;
	cin >> a >> b >> c;
	try {
		res = roots(a, b, c);
		if (res.size() == 1)
			cout << res[0];
		else
			cout << res[0] << " " << res[1];
	}
	catch (bad_arguments) {
		cout << "Уравнение не имеет действительных корней.";
		return 1;
	}
}


