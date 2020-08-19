#include<bits/stdc++.h>
using namespace std;

typedef map<int, int> MyMap;

int findEntryWithLargestValue( map<int, int> sampleMap) { 
  
    int entryWithMaxValue = 0;

    map<int, int>::iterator currentEntry; 
    for (currentEntry = sampleMap.begin(); 
         currentEntry != sampleMap.end(); 
         ++currentEntry) { 
  
        if (currentEntry->second > entryWithMaxValue) { 
  
            entryWithMaxValue = currentEntry->first; 
        } 
    } 
  
    return entryWithMaxValue; 
} 

int main(){
    int n, i, c = 1;
    vector<int> arr;
    MyMap MyMap;

    cin>>n;

    for ( i = 0; i < n; i++)
    {
        int item;
        cin>>item;
        arr.push_back(item);
    }

    sort(arr.begin(), arr.end());

    for(i = 0; i < n; ++i){
        if(arr[i] == arr[i+1])
            c += 1;

        else{
            MyMap[arr[i] ] = c;
            c = 1;
        }
    }

    map<int, int>::iterator p = MyMap.begin();

    while(p != MyMap.end()){
        cout<<p->first<<": "<<p->second<<endl;
        p++;
    }


    int entryWithMaxValue = findEntryWithLargestValue(MyMap);
    
    cout<< entryWithMaxValue;

    return 0;    

}