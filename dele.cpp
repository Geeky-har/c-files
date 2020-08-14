#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n,arr[10],count=0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(i=0; i<n-1; i++){				//12 4 4 5 3
		for(j=i+1; j<n; j++){
			if(arr[i] + arr[j] == 8){
				count++;
			}
			break;
		}
	}
	cout<<"No. of occurences are: "<<count<<endl;
	return 1;
}
