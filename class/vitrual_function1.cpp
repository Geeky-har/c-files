#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()		//this is virtual function
		{
			cout<<"Hello guys";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			cout<<"This is derived class";
		}
};
int main()
{
	derived *b;
	b=new derived;
	b->fun();
	return 0;
}
