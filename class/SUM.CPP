#include<iostream>
using namespace std;
class add
{
	int a,b;
public:
	void input()
	{
		cout<<"enter two numbers\n";
		cin>>a>>b;
	}
	void output()
	{
		cout<<"The sum is" <<a+b;
	}
};


int main()
{
	add c;
	c.input();
	c.output();
	return 0;
}
