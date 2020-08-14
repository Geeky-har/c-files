#include<bits/stdc++.h>
using namespace std;

void findEle(int arr[], int n, int k){
	
	sort(arr, arr+n);
	
	cout<<"The "<<k<<"th smallest element is: "<<arr[k-1];
}

int main(){
	int n, arr[20], i, k;
	
	cout<<"Enter the size of the array: "<<endl;	
	cin>>n;
	
	cout<<"Now enter the elemnts inside the array: "<<endl;
	for(i=0; i<n; ++i){
		cin>>arr[i];
	}
	
	cout<<"Now enter the kth smallest element you want to find: "<<endl;
	cin>>k;
	
	findEle(arr, n , k);
	
	return 0;
}
