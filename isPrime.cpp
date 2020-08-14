#include<iostream>
using namespace std;

int main(){
	int i, n;
	bool isTrue = true;
	cout<<"Enter the number which you want to check"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			isTrue = false;
			break;
		}
	}
	if(isTrue){
		cout<<"The number is a prime number"<<endl;
	}
	else{
		cout<<"The number that you have entered is not a prime number"<<endl;
	}
	return 0;
}
