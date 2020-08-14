#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("experiment.txt");
	fout<<"Lets see whether this experiment will work or not";
	fout.close();
	if(!fout)
		cout<<"file has not been created";
	else
		cout<<"File has been created successfully";
	return 0;
	
}
