#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,item,r;
    int arr[1000];

    cin>>n>>r;

    for(i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

	while(r){
		int temp = arr[0];
		
		for(i=1; i<n; ++i){
			arr[i-1] = arr[i];
		}
		
		arr[n-1] = temp;
		r-=1;
	}
	
	for(i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}
