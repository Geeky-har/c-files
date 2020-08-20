#include<bits/stdc++.h>
using namespace std;

typedef map<string, string> phoneBook;

phoneBook createBook(){
	string name;
	string number;
	int n,i;
	
	phoneBook phone;
	
	cout<<"Enter the number of entries you want to write in the book: "<<endl;
	cin>>n;
	
	cout<<"Now enter "<<n<<" sets of name and their corresponding number: "<<endl;
	for(i=0; i<n; ++i){
		cin>>name;
		cin>>number;
		
		phone[name] = number;
	}
	
	cout<<"Your phone book is created successfully!! "<<endl<<endl;
	
	return(phone);
	
}

void dispBook(phoneBook &phone){
	
	phoneBook::iterator it;
	
	cout<<"Your Phone Book is as Follows: "<<endl;
	
	for(it=phone.begin(); it != phone.end(); ++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	cout<<endl;
	
}

void updateBook(phoneBook &phone){
	string name;
	string number;
	
	cout<<"Please Enter the persons name: "<<endl;
	cin>>name;
	
	cout<<"Now Enter the contact number of the person: "<<endl;
	cin>>number;
	
	phone[name] = number;
	
	cout<<"Number added successfully!!"<<endl<<endl;
}

void searchBook(phoneBook &phone){
	string name;
	string number;
	
	try{
	
	cout<<"Please enter the name of the person whose number you want: "<<endl;
	cin>>name;

	number = phone[name];
	
	if(number == phone[name])
		cout<<"The Number of "<<name<<" is: "<<number<<endl<<endl;
		
	else
		throw "Contact Not Found";
		
	}
	catch(const char* msg){
		cout<<msg<<endl<<endl;
	}

}

int main(){
	int op;
	phoneBook t;
	
	do{
		
	cout<<"********************************* MAIN MENU *********************************"<<endl<<endl;
	
	cout<<"Please select one of the option from below: "<<endl<<endl;
	
	cout<<"1. To create a new book"<<endl;
	cout<<"2. To display the phone book"<<endl;
	cout<<"3. To add a contact number"<<endl;
	cout<<"4. To search for a number"<<endl;
	cout<<"5. Exit"<<endl;
	
	cin>>op;
	
	switch(op){
		case 1: t = createBook();
				break;
				
		case 2: dispBook(t);
				break;
				
		case 3: updateBook(t);
				break;
				
		case 4: searchBook(t);
				break;
	}
	
	}while(op != 5);
	
	return 0;
}
