#include<bits/stdc++.h>
using namespace std;

int main(){
	char input[10], temp;
	cout<<"Enter the coordinate of the chess board:"<<endl;
	cin.getline(input, 10);			//to take input from user
	
	temp = input[0];				//stores the first index(i.e the letter of the block)
	
	try{
		stringstream ss;			//initialised an object of stringstream class
		ss << input[1];				//Used insertion operator to store second index of input
	
		int a = 0;
		ss >> a;				//converted char to int		
		
		input[0] = toupper(temp);		//converted letter to uppercase for ease
	
		if(input[0] == 'B' || input[0] == 'D' || input[0] == 'F' || input[0] == 'H'){
			if(a%2 == 0)
				cout<<"The color of the block is black"<<endl;

			else
				cout<<"The color of the block is white"<<endl;
					
		}
	
		if(input[0] == 'A' || input[0] == 'C' || input[0] == 'E' || input[0] == 'G'){
			if(a%2 == 0)
				cout<<"The color of the block is white"<<endl;
		
			else
				cout<<"The color of the block is black"<<endl;
		}
		
		else{
			throw "Enter valid Input!";		//will throw this message if user enters invalid input
		}
		
	}
		
	catch(const char *val){
		cout<<val<<endl;				//print the message defined in throw statement.
	}
	
	return 0;
}
