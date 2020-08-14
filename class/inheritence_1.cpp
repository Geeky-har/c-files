#include<iostream>
using namespace std;
class a
	{
		public:
			int id_p;
	};
	class b:public a
	{
		public:
			int id_c;
	};
int main()
{
	b obj;
	cout<<"Enter parent id: "<<endl;
	cin>>obj.id_p;
	cout<<"Enter child id: "<<endl;
	cin>>obj.id_c;
	cout<<"parent id is: "<<obj.id_p<<endl;
	cout<<"child id is: "<<obj.id_c<<endl;
	return 0; 
}
