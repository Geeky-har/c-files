#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0, rem;

    while(n>0){
        rem = n % 10;
        ans = ans*10 + rem;
        n /= 10;
    }

    return(ans);
}

int main(){
    int num;

    cout<<"Enter the number which you want to reverse: "<<endl;
    cin>>num;

    cout<<"The reverse number is: "<<reverse(num);

    return 0;
}