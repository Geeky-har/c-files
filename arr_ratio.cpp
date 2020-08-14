#include<bits/stdc++.h>
using namespace std;

int main(){
	int i, arr[20], n;
	double r_pcount, pcount=0, zcount=0, ncount=0;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	
	cout<<"Enter the numbers in the array: "<<endl;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<endl<<"Your array is as follows: "<<endl;
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	for(i=0; i<n; i++){
		if(arr[i] > 0)
			pcount+=1;
			
		else if(arr[i] == 0)
			zcount+=1;
			
		else
			ncount+=1;
	}
	
	r_pcount =  pcount/n;
	
	cout<<endl<<"The number of zero are: "<<r_pcount<<endl;
	cout<<endl<<"The number of pos are: "<<(pcount)/n<<endl;
	cout<<endl<<"The number of neg are: "<<(ncount)/n<<endl;
	
	return 0;
}
