#include<iostream>
using namespace std;

int main(){
    int n1, n2, max;

    cout<<"Enter two numbers for which you want to find the lcm: "<<endl;
    cin>>n1>>n2;

    max = (n1 > n2) ? n1 : n2;

    do{
        if (max % n1 == 0 && max % n2 == 0 ){
            cout<<"The LCM of "<<n1<<" and "<<n2<<" is: "<<max;
            break;
        }

        else{
            max++;
        }
        
    }while(true);

    return 0;
}