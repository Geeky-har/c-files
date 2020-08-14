#include<bits/stdc++.h>
using namespace std;

int power(int num, int pow){
    int t=1, i;
    for ( i = 1; i <= pow; i++)
    {
        t = t * num;
    }

    return(t);
    
}

int calSize(int number){
    stringstream ss;
    string s1;
    ss << number;
    ss >> s1;
    return(s1.size());
}

int main(){
    int n, size, temp, sum = 0, temp1;
    cout<<"Enter the number you want to check: "<<endl;
    cin>>n;
    
    size = calSize(n);
    
	temp1 = n;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        sum = sum + pow(temp, size);
    }

    if(sum == temp1){
        cout<<"Yes the number is a armstrong number"<<endl;
    }

    else
    {
        cout<<"No the number is not a armstrong number"<<endl;
    }
    
    return 0;
}
