#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	char ch[20];
	fin.open("test_file1.txt",ios::out);
	while(fin)
	{
		cout<<ch;
		fin.getline(ch,20);
	}
	fin.close();
	return 0;
	getch(); 
}
