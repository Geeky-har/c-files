#include<iostream>
using namespace std;
class omega
{
	public:
		omega(){
			cout<<"i am the constructor"<<endl;
		}
		~omega(){
			cout<<"I am the destructor"<<endl;
		}
};
int main()
{
	cout<<"starting main()"<<endl;
	omega om1,om2;
	cout<<"Ending main()"<<endl;
	return 0;
}
