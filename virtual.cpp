#include<iostream>
using namespace std;

class Base{
public:
	int base_val = 20;
	virtual display(){
		cout<<"the value of base :";
		cout<<base_val;
	}
};

class derived : public Base{
public:
	int der_val = 30;
	virtual display(){
		cout<<"the derived value :";
		cout<<der_val;
		
	}
};

int main()
{
	Base bc;
	derived dc;
	
	Base *ptr;
	ptr = &dc;
	ptr->display();
	
	
}
