#include<iostream>
using namespace std;
class complex {
	private:
		int x,y;
	public:
		complex(int a, int b) {
			x=a;
			y=b;
		}
		int getX() {
			return x;
		}
		int getY() {
			return y;
		}
		
};

int main()
{
	int num1,num2;
	cout<<"Enter value for x: "<<endl;
	cin>>num1;
	cout<<"Enter value for y: "<<endl;
	cin>>num2;
	complex obj(num1,num2);
	cout<<"Value for x is: "<<obj.getX()<<endl;
	cout<<"Value for y is: "<<obj.getY()<<endl;
	return 12;
}
