#include<iostream>
using namespace std;
class student		//base class1
{
	protected:
		int rollno;
		char *name;
	public:
		void getdata(int a, char *n)
		{
			rollno=a;
			name=n;
		}
		void putdata()
		{
			cout<<"The name of the student is: \t"<<name<<endl;
			cout<<"The roll no of the student is: \t"<<rollno<<endl;
		}
		
};
class test: public student		//derived class1
{
	protected:
		float m1,m2;
	public:
		void gettest(float a, float b)
		{
			m1=a;
			m2=b;
		}
		void puttest()
		{
			cout<<"Your marks in CPP is: \t\t"<<m1<<endl;
			cout<<"Your marks in java is: \t\t"<<m2<<endl;
		}
};
class result: public test		//derived class2
{
	protected:
		float total;
	public:
		void DisplayResult()
		{
			total=m1+m2;
		
			putdata();
			puttest();
			cout<<"Total of the two marks is: \t"<<total<<endl;
	    }
};
int main()
{
	int a;
	float b,c;
	char n[10];
	cout<<"*********************************IMPLEMENTATION OF MUTILEVEL INHERITENCE***************************************"<<endl;
	cout<<"Please enter your name: ";
	cin>>n;
	cout<<"Please enter your roll number: ";
	cin>>a;
	result r1;
	r1.getdata(a,n);
	cout<<"Enter your marks in CPP: ";
	cin>>b;
	cout<<"Enter your marks in java: ";
	cin>>c;
	r1.gettest(b,c);
	cout<<endl<<endl<<"***************************RESULT**************************"<<endl;
	r1.DisplayResult();
	cout<<"************************************************************"<<endl;
	return 0;
}
