#include<iostream>
using namespace std;

class Person{
	public:
	string name;
	int age;
	
	virtual setdata(){
		cout<<"enter the person name :";
		cin>>name;
		cout<<"enter the person age :";
		cin>>age;
	}
	virtual display(){
		cout<<"name is "<<name<<endl;
		cout<<"age is "<<age<<endl;
	}
	
};

class Employee : public Person{
	public:
	string emp_id;
	string emp_pos;
	
	virtual setdata(){
		cout<<"enter the empolyee id :";
		cin>>emp_id;
		cout<<"enter the employee position :";
		cin>>emp_pos;
	}
	virtual display(){
		cout<<"id is "<<emp_id<<endl;
		cout<<"position is "<<emp_pos<<endl;
	}
}; 

class Customer : public Person{
	public:
	string cus_id;
	string cus_pos;
	
	virtual setdata(){
		cout<<"enter the Customer id :";
		cin>>cus_id;
		cout<<"enter the Customer position :";
		cin>>cus_pos;
	}
	virtual display(){
		cout<<"Customer is "<<cus_id<<endl;
		cout<<"Customer is "<<cus_pos<<endl;
	}
	
};
class EmployeeCustomer : public Employee,public Customer{
	public:
		string ec_id;
		
		virtual setdata(){
			cout<<"enter ec ID";
			cin>>ec_id;
		}
		virtual display(){
			cout<<"employee ec ID"<<ec_id;
		}
	
};

int main(){
	Person p;
	Customer c;
	Employee e;
	EmployeeCustomer ec;
	
	Person *ptr;
	ptr = &p;
	ptr->setdata();
	ptr=&c;
	ptr->setdata();
	
}
