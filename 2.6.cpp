#include<iostream>
using namespace std;
int main()
{
	int a, b,x,y;
	cout << "������������" << endl;
	cin >> a >> b;
	for(int i=1;i<=a&&i<=b;i++)
		if (a % i == 0 && b % i == 0) { x = i; }
	for(int i=1;;i++)
		if (i % a == 0 && i % b == 0) { y = i; break; }
	cout << "����λ�������Լ��Ϊ��" << x << "��С������Ϊ��" << y << endl;
	return 0;

}
