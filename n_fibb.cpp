#include<iostream>
using namespace std;

int main(){
    int n, n1 = 1, n2 = 1, i, fib;

    cout<<"Enter the nth term for which you want to see the fibonacci number: "<<endl;
    cin>>n;

    if(n == 1)
        cout<<n1;

    else if (n == 2)
        cout<<n2;

    else{

        for ( i = 3; i <= n; i++){
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
        }

        cout<<"The "<<n<<"th term is: "<<fib;
    }

    return 0;
}