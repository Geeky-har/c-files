#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	char str[100],str1[100],str2[100];
	int i;
	vector<string> arr;
	vector<char> arr1;
	char* ptr;
	cout<<"Enter the expressions: "<<endl;
	for(i=1;i<=3;i++){
		char x[100];
		cin.getline(x, 100);
		arr.push_back(x);
		
//		if(i == 1)
//			cin.getline(str, 100);
//			
//		else if(i == 2)
//			cin.getline(str1, 100);
//			
//		else
//			cin.getline(str2, 100);
		
	}
	
//	ptr = strtok(str, "+");
//	
//	while(ptr != NULL){
//		arr.push_back(ptr);
//		ptr = strtok(NULL, "+");
//	}
	for(i=0;i<3;i++){

//		for(int j=0; j<arr[0].size(); j++){
//			
			char w = arr[i].at(arr[i].size() - 1);
			
//			cout<<arr[0].at(j)<<endl;
//			if(arr[0].at(j) == '='){
//				cout<<(arr[0].at(j+1));
//				char w = arr[0][j+2];
				arr1.push_back(w);
//			}
		}
//	}

	for(i=0; i<arr1.size(); i++)
 		cout<<arr1[i]<<endl;
		
	return 0;
}
