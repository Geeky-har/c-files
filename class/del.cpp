#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    public:
        int age;
        string name;

        virtual void getdata(){};
        virtual void putdata(){};
};

class Professor: public Person
{
    int publication, cur_id=0;
        
    public:
		void getdata(){
        	cin>>name>>age>>publication;
        }
        void putdata(){
           	cur_id++;
           	cout<<name<<" "<<age<<" "<<publication<<" "<<cur_id<<endl;
        }

};

class Student: public Person
{
    int marks[6],cur_id_2=0;
    public:
       	void getdata(){
           	cin>>name>>age;
           	for(int i=0;i<6;i++){
               	cin>>marks[i];
           	}
       	}

       	void putdata(){
           	cur_id_2++;
           	int sum_m=0;
           	for(int j=0;j<6;j++){
               	sum_m = sum_m + marks[j];
           	}
           	cout<<name<<" "<<age<<" "<<sum_m<<" "<<cur_id_2<<endl;

       }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

