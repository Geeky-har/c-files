#include<iostream>
using namespace std;
class R
{
	private:
		int kb;
		int lm;
	public:
		R():kb(9),lm(10){}
		void showPlyr()
		{
			cout<<"Karim benzema no:"<<kb<<endl;
			cout<<"Luka modric no: "<<lm<<endl;
		}
		friend void print(R&);
		
};
void print(R &i)
{
		cout<<"KB: "<<i.kb<<endl;
		cout<<"LM: "<<i.lm<<endl;
}

int main()
{
	R ch;
	print(ch);
	return 0;
}
