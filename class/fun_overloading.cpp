#include<iostream>
using namespace std;
class overloading
{
	public:
		void func(int x)
		{
			cout<<"value of x: "<<x<<endl;
		}
		void func(double x)
		{
			cout<<"value of x: "<<x<<endl;
		}
		void func(double x, double y)
		{
			cout<<"value of x: "<<x<<endl;
			cout<<"value of y: "<<y<<endl;
		}
};
int main()
{
	overloading obj;
	obj.func(10);
	obj.func(10,15);
	obj.func(12.5);
	return 0;
}
