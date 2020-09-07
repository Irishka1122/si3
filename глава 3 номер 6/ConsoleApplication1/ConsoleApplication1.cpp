
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c;
	if (a > b) {
		d = max(a, c);
		e = min(b, c);
	}
	else
	{
		d = max(b, c);
		e = min(a, c);
	}
	cout << e << ',' << (a + b + c - d - e) << ',' << d;
}

