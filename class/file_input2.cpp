#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	char line[30];
	fin.open("real madrid.txt");
	while(fin)
	{
		fin.getline(line,30);
		cout<<line<<endl;
	}
	fin.close();
	return 0;
	getch();
}
