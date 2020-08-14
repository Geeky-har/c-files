#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("test_file1.txt",ios::out);
	fout<<"PAisa PAisa"<<endl;
	fout.close();
	return 0;
	getch();
}
