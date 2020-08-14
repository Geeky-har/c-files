#include<iostream>
#include<string>
using namespace std;
class Address
{
	public:
		string address_line,city,state;
		double pincode;
		Address(string address_line, string city, string state, double pincode)
		{
			this->address_line=address_line;
			this->city=city;
			this->state=state;
			this->pincode=pincode;
		}
};
class Employee
{
	Address *address;		//address type pointer of address class
	public:
		int emp_id;
		string name;
		double sal;
		Employee(int emp_id, string name, double sal, Address *address)		//accepting a reference type parameter		
		{
			this->emp_id=emp_id;
			this->name=name;
			this->address=address;
			this->sal=sal;
		}
		void display()
		{
			cout<<"Your name is: "<<name<<endl;
			cout<<"Your id is: "<<emp_id<<endl;
			cout<<"Your salary is: "<<sal<<endl;
			cout<<"Your address is: "<<endl;
			cout<<address->address_line<<", ";
			cout<<address->city<<", ";
			cout<<address->state<<"-";
			cout<<address->pincode<<endl;
		}
};
int main()
{
	Address a("H.no: 3103","faridabad","Haryana",121004);
	Employee e(101,"Harsh",45000,&a);		//passing object as a argument
	e.display();
	return 0;
}
