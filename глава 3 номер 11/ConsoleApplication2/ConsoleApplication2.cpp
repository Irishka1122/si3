

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int o, p, de, dv, po, sum;
	double sum2;
	cin >> o >> p >> de >> dv >> po;
	if (o % 10 == 1)
		cout << "У вас " << o << " одноцентовая монета"<<endl;
	else
		if (o % 10 == 2 or o % 10 == 3 or o % 10 == 4)
			cout << "У вас " << o << " одноцентовые монеты" << endl;
		else
			cout << "У вас " << o << " одноцентовых монет" << endl;
	if (p % 10 == 1)
		cout << "У вас " << p << " пятицентовая монета" << endl;
	else
		if (p % 10 == 2 or p % 10 == 3 or p % 10 == 4)
			cout << "У вас " << p << " пятицентовые монеты" << endl;
		else
			cout << "У вас " << p << " пятицентовых монет" << endl;
	if (de % 10 == 1)
		cout << "У вас " << de << " десятицентовая монета" << endl;
	else
		if (de % 10 == 2 or de % 10 == 3 or de % 10 == 4)
			cout << "У вас " << de << " десятицентовые монеты" << endl;
		else
			cout << "У вас " << de << " десятицентовых монет" << endl;
	if (dv % 10 == 1)
		cout << "У вас " << dv << " двадцатипетицентовая монета" << endl;
	else
		if (dv % 10 == 2 or dv % 10 == 3 or dv % 10 == 4)
			cout << "У вас " << dv << " двадцатипетицентовые монеты" << endl;
		else
			cout << "У вас " << dv << " двадцатипетицентовых монет" << endl;
	if (po % 10 == 1)
		cout << "У вас " << po << " петидесятицентовая монета" << endl;
	else
		if (po % 10 == 2 or po % 10 == 3 or po % 10 == 4)
			cout << "У вас " << po << " петидесятицентовые монеты" << endl;
		else
			cout << "У вас " << po << " петидесятицентовых монет" << endl;
	sum = o + p + de + dv + po;
	sum2 = sum;
	if (sum % 10 == 1)
		cout << "Общая стоимость ваших монет равна " << sum2/100 << " доллар." << endl;
	else
		if (sum % 10 == 2 or sum % 10 == 3 or sum % 10 == 4)
			cout << "Общая стоимость ваших монет равна " << sum2/100 << " доллора" << endl;
		else
			cout << "Общая стоимость ваших монет равна " << sum2/100 << " доллоров" << endl;
}


