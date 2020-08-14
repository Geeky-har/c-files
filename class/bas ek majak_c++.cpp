#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream fin;
	char ch[30];
	fin.open("bas ek majak.txt");
	while(fin)
	{
		fin.getline(ch,30);
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
	
}
