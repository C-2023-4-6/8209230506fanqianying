#include<iostream>
using namespace std;
int main()
{
	double x, y;
	char s;
	cin >> x >> s >> y;
	if (s == '+')cout << x<<"+" << y <<"=" << x + y << endl;
	if (s == '-')cout << x << "-" << y << "-" << x - y << endl;
	if (s == '*')cout << x << "*" << y << "*" << x * y << endl;
	if (s == '/')
		if (y == 0)cout << "����" << endl;
		else cout << x << "/" << y << "/" << x / y << endl;
	if (s == '%')
		if (y == 0)cout << "����" << endl;
	else cout << x << "%" << y << "%" << int(x) % int(y) << endl;
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')cout << "���ڼ��㷶Χ��" << endl;
	return 0;



}