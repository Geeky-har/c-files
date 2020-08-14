#include<iostream>
using namespace std;
class Area
{
	int length,breadth;
	public:
		Area()
		{
			length=10;
			breadth=15;
		}
		void showArea()
		{
			cout<<"The area of rectangle is: "<<length*breadth<<endl;
		}
		friend void print(Area&);		//friend function declared
};
void print(Area &i)					//friend function defined
{
	i.length=50;		//private data
	i.breadth=100;		//changed
	cout<<"Friend area is: "<<i.length*i.breadth<<endl;
}
int main()
{
	Area obj1;
	print(obj1);
	return 0;
}
