#include<iostream>
using namespace std;
class cft
{
public:
	int length;
	int width;
	int height;
	void set_cft()
	{
		cout << "请输入长方柱的长宽高：";
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void show_cft()
	{
		cout << (length * width * height) << endl;
	}

};
int main()
{
	cft v1, v2, v3;
	v1.set_cft();
	cout << "v1=";
	v1.show_cft();
	v2.set_cft();
	cout << "v2=";
	v2.show_cft();
	v3.set_cft();
	cout << "v3=";
	v3.show_cft();
}