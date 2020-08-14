#include<bits/stdc++.h>
using namespace std;

int main(){
	list <int> l1;
	int n,x,i;
	
	cout<<"Enter the number of values: "<<endl;
	cin>>n;
	
	cout<<"Now enter "<<n<<" no of values: "<<endl;
	
	for(i=0; i<n; ++i){
		cin>>x;
		l1.push_back(x);
	}
	
	list <int>::iterator it = l1.begin();
	
	cout<<"The resultant list is: "<<endl;
	
	while(it != l1.end()){
		cout<<*it<<" ";
		it++;
	}
	
	return 0;
}
