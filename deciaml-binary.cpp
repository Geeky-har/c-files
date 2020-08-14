#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,num,arr[50];
	cout<<"Enter the number you want to convert to decimal: "<<endl;
	cin>>num;
	
	for(i=0;num>0;i++){	  //012345
		arr[i] = num%2;  //101011
		num = num/2;	 //26 13 6 3 1 0
	}
	for(i=i-1;i>=0;i--){	//we decreemented i by 1 cuz in above loop i value was 6
		cout<<arr[i];
	}
	return 0;
}	
