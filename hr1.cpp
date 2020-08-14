#include<bits/stdc++.h>
using namespace std;

class Student{
	private:
		int age,std;
		string fn,ln;
	public:
		void set_age(int ag){
			age=ag;
		}
		
		void set_standard(int sd){
			std=sd;
		}
		
		void set_first_name(string f){
			fn=f;
		}
		
		void set_last_name(string l){
			ln=l;
		}
		
		int get_age(){
			return age;
		}
		
		int get_standard(){
			return std;
		}
		
		string get_first_name(){
			return fn;
		}
		
		string get_last_name(){
			return ln;
		}
		string to_string()
    	{
        stringstream ss;
        char c = ',';
        ss << age << c << fn << c << ln << c << std;
        return ss.str();
    	}
		
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    
    cout << "\n";
    cout << st.to_string();
    return 0;
}
	
