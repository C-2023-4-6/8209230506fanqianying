#include<iostream>
using namespace std;
int main(void)
{
	    cout << "������һ���ַ���" << endl;
		char a;
		cin >> a;
		int x = a;
		if (a >= 65 && a <= 90)//���a�Ǵ�д��ĸ 
			cout << x << endl;
		else//���a��Сд��ĸ 
		{
			a = a - 32;
			cout << a;
		}

}