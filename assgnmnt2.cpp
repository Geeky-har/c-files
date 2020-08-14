#include<bits/stdc++.h>
using namespace std;

int main(){
	char input[10];
	cout<<"Enter the coordinate of the chess board(use uppercase letter) :"<<endl;
	cin.getline(input, 10);
	
	if(input[0] == 'B' || input[0] == 'D' || input[0] == 'F' || input[0] == 'H'){
		
		if(input[1] == '2' || input[1] == '4' || input[1] == '6' || input[1] == '8')
			cout<<"The color of block is black"<<endl;

		else
			cout<<"The color of block is white"<<endl;
			
	}
	
	if(input[0] == 'A' || input[0] == 'C' || input[0] == 'E' || input[0] == 'G'){
		
		if(input[1] == '2' || input[1] == '4' || input[1] == '6' || input[1] == '8')
			cout<<"The color of block is white"<<endl;
		
		else
			cout<<"The color of block is black"<<endl;
	}
	
	return 0;
	
}
