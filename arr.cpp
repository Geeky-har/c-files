#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void rev(int arr[], int n){
	int i=0,j=n-1, temp;
	
	while(i<j){
		swap(arr[i], arr[j]);
		i+=1;
		j-=1;
	}
	
	for(i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int n,arr[100],i;
	
	cout<<"Enter the size of the arry: "<<endl;
	cin>>n;
	
	cout<<"Now Enter the elements inside the array: "<<endl;
	
	for(i=0; i<n; ++i){
		cin>>arr[i];
	}cout<<endl;
	
	cout<<"Initial array is: "<<endl;
	
	for(i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	cout<<"Array after reverse operation is: "<<endl;
	
	rev(arr, n);
	
	return 0;
}
