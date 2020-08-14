#include<bits/stdc++.h>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
	int arr[20],i,n;
	cout<<"Size";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bool exists = std::any_of(std::begin(arr), std::end(arr), [&](int i)
	{
    		return i == arr[i];
	});
	
	cout<<exists<<endl;
	return 0;
}
