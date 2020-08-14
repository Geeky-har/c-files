#include<iostream>
using namespace std;
class A;
class B
{
	public:
		void fun(A& );
};
class A
{
	private:
		int x,y;
	public:
		A():x(1),y(2){}
		friend void B::fun(A& );
};

void A::fun(A &a)
{
	cout<<"a is "<<a.x<<endl;
	cout<<"b is "<<a.y<endl;
}
int main()
{
	A ob1;
	B ob2;
	ob2.fun(ob1);
	return 0;
}
