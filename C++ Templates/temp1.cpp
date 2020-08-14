#include<bits/stdc++.h>

using namespace std;

/*template <class T>
void swap(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}

void fun(int m, int n)
{
	cout<<"Values before swapping is: "<<m<<" "<<n<<endl;
	swap(m,n);
	cout<<"Values after swapping is: "<<m<<" "<<n<<endl;
	
}
int main(){
	fun(12,878);
	return 0;
}*/

template <class A>
void test(A x, A y)		//generic fuction version 1
{
	cout<<"Generic Function ver 1 called: "<<x<<" "<<y<<endl;
}

template <class X, class Y>		//generic function version 2
void test(X m, Y n)
{
	cout<<"Generic function ver 2 called: "<<m<<" "<<n<<endl;
}

void test(int a, int b)
{
	cout<<"Non-generic function called: "<<a<<" "<<b<<endl;
}

int main()
{
	test(1,10);
	test(2,2.5);
	test("a","b");
	
	return 0;
}
