#include<iostream>
#include<conio.h>
using namespace std;
double division(int a, int b)
{
	if(b==0)
		{
			throw "Division by zero condition";
		}
	return(a/b);
}
int main()
{
	int x;
	int y;
	float z=0;
	try{
		cout<<"Enter the numerator: ";
		cin>>x;
		cout<<"Enter the denominator(you can enter 0): ";
		cin>>y;
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(const char* msg){
		cout<<msg<<endl;
	}
	return 0;
	getch();
}
