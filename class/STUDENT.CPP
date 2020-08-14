#include<iostream>
using namespace std;
class student
{
 private:
	char name[10];
	int rollno;
	char section[5];
 public:
	void get_data()
	{

		cout<<"Enter name,roll number and section"<<endl;
		cin>>name>>rollno>>section;
	}
	void display_data()
	{
		cout<<"\n Your name is: "<<name;
		cout<<"\n Your roll number is: "<<rollno;
		cout<<"\n Your section is: "<<section;
	}
};
int main()
{
	student obj;
	obj.get_data();
	obj.display_data();
	return 0;
}

