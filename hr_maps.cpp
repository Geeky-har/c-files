//  1:Add the marks  to the student whose name is .

//  2: Erase the marks of the students whose name is .

//  3: Print the marks of the students whose name is . (If  didn't get any marks print .)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int q, type; cin >> q; 
    map<string,int> clas; string name;
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2)
            clas.erase(name);
        else
            cout << clas[name] << "\n";
    }
    return 0;
}