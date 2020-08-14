#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x, int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"sum of a: "<<a<<endl;
			cout<<"sum of b: "<<b<<endl;
		}
		complex operator +(complex c)		//operator overloading
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};
int main()
{
	complex o1,o2,o3;
	o1.setdata(5,4);
	o2.setdata(9,8);
	o3=o1+o2;
	o3.showdata();
	return 0;
}
