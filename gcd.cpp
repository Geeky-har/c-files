#include<iostream>
using namespace std;
void gcd(int n, int m){
	int i;
	if(n%2==0 && m%2==0){
		cout<<"the gcd is 2"<<endl;
	}
	else{
		for(i=3;i<=n;i++){
			if(n%i==0 && m%i==0){
				cout<<"The gcd is "<<i<<endl;
				break;
			}
			else{
				cout<<"there is no gcd in these numbers"<<endl;
				break;
			}
		}
	}
}
int main(){
	int n1, n2;
	cout<<"Enter the two numbers: "<<endl;
	cin>>n1>>n2;
	gcd(n1,n2);
	return 0;
}
