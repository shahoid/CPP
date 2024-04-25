#include<iostream>
using namespace std;

class Rectangle{
	
	int base;
	int height;
	int circumference;
	int area;
	friend void get_data();
	
	public:
	Rectangle(int b,int h){
		base = b;
		height = h;
	}
	
	void get_data(){
		circumference = 2*base*height;
		area = base*height;
		
		cout<<"the circumference of the rectangle :"<<circumference<<endl;
		
		cout<<"the area of the rectangle :"<<area<<endl;

		
	}
};

int main(){
	
	Rectangle rc1(4,5);
	rc1.get_data();
}
