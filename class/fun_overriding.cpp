#include<iostream>
using namespace std;
class base
{
	public:
		void func(int x)
		{
			cout<<"Value of x: "<<x;
		}
		void func(float x)
		{
			cout<<"Value of x: "<<x;
		}
		void func(double x, double y)
		{
			cout<<"Value of x: "<<x;
			cout<<"Value of y: "<<y;
		}
};
class derived: public base
{
	public:
		void func()
		{
			cout<<"I am empty"<<;
		}
		void func(char x)
		{
			cout<<"The value of x: "<<x;
		}
		void func(float y)
		{
			cout<<"The value of y: "<<y;
		}
};
int main()
{
	base b;
	derived d;
	b=d;
	b.func("h");
	return 0;
}
