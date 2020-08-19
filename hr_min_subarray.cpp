#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, item, k, counter = 1;
    vector<int> arr, my_arr;

    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>item;
        arr.push_back(item);
    }

    sort(arr.begin(), arr.end());

    for ( i = 0; i < arr.size(); i++)
    {
        for ( k = i+1; k < arr.size(); k++)
        {
            if (arr[i] == arr[k] || arr[i] + 1 == arr[k])

                counter++;
            
            else{
                my_arr.push_back(counter);
                counter = 1;
                break;
            }
            
        }my_arr.push_back(counter);
         counter = 1;
        
    }

    cout<<*max_element(my_arr.begin(), my_arr.end());
    
    return 0;

}