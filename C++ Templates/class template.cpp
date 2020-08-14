#include<bits/stdc++.h>

using namespace std;

class ArrayList
{
	struct Block
	{
		int size_arr;
		int *arr_ptr;
	};
	Block *s;
	public:
		ArrayList(int size)
		{
			s=new Block;
			s->size_arr=size;
			s->arr_ptr=new int[s->size_arr];
		}
		void addElement(int index, int data)
		{
			if(index>=0&&index<=s->size_arr)
			{
				s->arr_ptr[index]=data;
			}
			else
				cout<<"The index is out of range"<<endl;
		}
		void disArray()
		{
			for(int i=0;i<s->size_arr;i++)
				cout<<" "<<s->arr_ptr[i];
		}
};

int main()
{
	ArrayList obj1(3);
	obj1.addElement(0,31);
	obj1.addElement(1,15);
	obj1.addElement(2,150);
	obj1.disArray();
	return 0;
}
