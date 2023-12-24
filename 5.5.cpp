#include<iostream>
using namespace std;
class point
{
private:
	double x, y;
public:
	point(double newx,double newy);
	void setpoint(int i, int j);
	void display();

	
};
point::point(double newx, double newy)
{
	x = newx;
	y = newy;
}
void point::setpoint(int i, int j)
{

	x = x + i;
	y = y + j;
}
void point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
	point p1(60, 80);
	double i, j;
	cout << "请输入两个数" << endl;
	cin >> i >> j;
	p1.setpoint(i, j);
	p1.display();
	return 0;
}