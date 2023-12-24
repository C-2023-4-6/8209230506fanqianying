#include<iostream>
using namespace std;
class student
{
public:
	student(int n,string na,int m):num(n),name(na),mark(m){}
	int num;
	string name;
	int mark;
};
void max(student *p,int n)
{
	student* pt, t(0, "", 0); 
	int max = p->mark;
	for (pt = p; pt < p + n; pt++)
	{
		if (pt->mark > max)
		{
			max = pt->mark;
			t = *pt;
		}
	   }
	cout << t.mark;
}
int main()
{
	student stu[5] = {
		student(1,"a",67),
		student(2,"b",93),
		student(3,"c",55),
		student(4,"d",87),
		student(5,"e",45)
	};
	max(stu, 5);
	return 0;
}
