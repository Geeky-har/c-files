#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mat[100][100],i,j,sum1=0,sum2=0;
	vector<int> arr1, arr2;
	cout<<"Enter the size of the matrix: "<<endl;
	cin>>n;
	
	for(i=0; i<n; ++i){
		for(j=0; j<n; ++j){
			cin>>mat[i][j];
		}
	}
	
//	for(i=0; i<n; ++i){
//		for(j=0; j<n; ++j){
//			cout<<mat[i][j]<<" ";
//		}cout<<endl;
//	}
	
	for(i=0; i<n; ++i){
		for(j=0; j<n; ++j){
			if(i == j){
				arr1.push_back(mat[i][j]);
			}
		}
	}
	
	cout<<"The primary diagnol is: ";
	
	for(i=0; i<arr1.size(); ++i){
		cout<<arr1[i]<<" ";
	}
	
	for(i=0; i<n; ++i){
		for(j=0; j<n; ++j){
			if((i+j) == n-1)
				arr2.push_back(mat[i][j]);
		}
	}cout<<endl;
	
	cout<<"The secondary diagnol is: ";
	
	for(i=0; i<arr2.size(); ++i){
		cout<<arr2[i]<<" ";
	}cout<<endl;
	
	cout<<"Absolute Difference between the diagnols of the matrix is: "<<endl;
	for(i=0; i<arr1.size(); ++i){
		sum1 = sum1 + arr1[i];
		sum2 = sum2 + arr2[i];
	}
	
	cout<<abs(sum1 - sum2);
}
