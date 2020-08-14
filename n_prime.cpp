#include<iostream>
using namespace std;

void p_list(int n){
	int i,j;
	bool exists = true;
	
	cout<<"The list of prime numbers between 0 and "<<n<<" is: "<<endl;
	
	for(i=2; i<=n; ++i){
		
		exists = true;
		
		for(j=2; j<=i/2; ++j){
			if(i%j==0){
				exists = false;
				break;
			}
		}
		
		if(exists)
			cout<<i<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter the number of terms: "<<endl;
	cin>>n;
	
	p_list(n);
	
	return 0;
}
