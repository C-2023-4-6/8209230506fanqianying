#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	
	void SetTime()
	{
		cin >>hour;
		cin >>minute;
		cin >>sec;
		
	};
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}

};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.SetTime();
	t1.ShowTime();
	return 0;
}