#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int F;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> F;
	float t = (F - 32) * 5 / 9;
	cout << "�����¶�Ϊ��" <<fixed<<setprecision(2)<<t<<endl;
	return 0;
}