#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr, int x){ 		// function to check whether the element is already present or not
	vector<int>::iterator it;
	it = std::find (arr.begin(), arr.end(), x); 
	if (it != arr.end()){
		return false;			// will set bool false
	}
	else
		return true;			// will set bool true
}


int main(){
	int i,j,n,c=1;
	vector<int> arr1, count;		//arr1 for storing repeating elemnts, count for storing frequency
	bool exists;
	
	cout<<"Array Length"<<endl;		//input array length
	cin>>n;
	
	int *a = new int[n];			// dynamically created array for storing elements 
	
	cout<<"Array Input";			//input array
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a, a+n);					//will sort the original array to reduce time complexity
	
	for(i=1;i<n;i++){
		if(a[i] == a[i-1]){			//if found true
			c++;					//increement the count for frequency
			exists = check(arr1, a[i]);		//function to check whether element already present in vector
			if(exists)
				arr1.push_back(a[i]);		//if not present will store the element
				
			if(i == n-1){					//special condition when loop at last index
				if(c>1){
					count.push_back(c);
				}
			}
		}
			
		else{
			if(c>1){					// when non redundant element encountered store
				count.push_back(c);
			}	
			
			c = 1;						//will set the value to 1 again for other elements to get increemented
		}
	}
	
	cout<<endl<<"Repeated number"<<endl;
	
	for(int i = 0 ; i < arr1.size(); i++) 
        cout << arr1.at(i)<<" ";		//To show all the repeating numbers
         
	cout<<endl<<"Their Respected Frequency"<<endl;       
    for(int j = 0 ; j < count.size(); j++) 
        cout << count.at(j)<<" ";		//To show the frequency of respective repeating numbers
	
	return 0;
	
}
