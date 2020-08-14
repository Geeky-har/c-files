#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,i,arr[50],deci=0,count=0;
	cout<<"Enter your number:"<<endl;
	cin>>num;				//24
	for(i=0;num>0;i++){		//01
		arr[i] = num%10;	//4
		num = num/10;		//2
	}
	for(i=0;i<i;i++)
		cout<<arr[i];
//		int p;
//		p = pow(2,count);
//		deci = deci + arr[i] * p;
//		count++;
//	}
//	cout<<deci;
	return 0;
}
