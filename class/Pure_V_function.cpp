#include<iostream>
using namespace std;
class base							// this class is also abstract class 
{									// the class that will inherit this class must define the p_v function
	public:
		virtual void test()=0;		//this is pure virtual function
};
class c1:public base
{
	public:
		void test()
		{
			cout<<"Welcome ";
		}
};
class c2:public base
{
	public:
		void test()
		{
			cout<<"To my class"<<endl;
		}
};
int main()
{
	cout<<"************************************IMPLEMENTATION OF VIRTUAL FUNCTION*****************************************"<<endl;
	base *ptr[2];
	c1 obj1;
	c2 obj2;
	ptr[0]=&obj1;
	ptr[1]=&obj2;
	ptr[0]->test();
	ptr[1]->test();
	return 0;	
}
