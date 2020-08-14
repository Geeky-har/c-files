#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2; i<=n/2; ++i){
		if(n % i == 0)
			return false;
	}
	return true;
}

void primegen(int n){
	int num = 2;
	
	cout<<"The list of "<<n<<" prime numbers is: "<<endl;
	
	while(n){
		if(isPrime(num) == 1){
			cout<<num<<" ";
			n--;
		}
		num++;
	}
}

int main(){
	int n;
	cout<<"Enter the number of terms you want to see: "<<endl;
	cin>>n;
	
	primegen(n);
	
	return 0;
}
