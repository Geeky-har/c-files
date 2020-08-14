#include<iostream>
using namespace std;
void b_search(int[], int, int);
int main() {
	int a[10],n,i,key;
	cout<<"Enter size of the array: "<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements in ascending order"<<endl;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"You entered: "<<endl;
	for(i=0;i<n;i++) {
		cout<<" "<<a[i]<<endl;
	}
	cout<<"Enter elememnt you want to search: "<<endl;
	cin>>key;
	b_search(a,n,key);
	return 0;
}
void b_search(int data[], int s, int item)
{
	int beg=0,end=s-1;
	int mid=((beg+end)/2);
	int loc=0;
	while(data[mid]!=item && beg<=end) {
		if(item<data[mid]) {
			end=mid-1;
			mid=int((beg+end)/2);
		}
		else {
			beg=mid+1;
			mid=int((beg+mid)/2);
		}
	}
	if(data[mid]==item) {
		loc=mid;
		cout<<"element found at: "<<loc+1<<endl;
	}
	else
		cout<<"Element not found!!"<<endl;
}
