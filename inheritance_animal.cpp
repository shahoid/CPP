#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal speaks :" << endl;
    }

    void move() {
        cout << "Animal moves." << endl;
    }
};

class Dog : public Animal {
public:

    void bark() {
        cout << "Dog barking!!!!!!!!" << endl;
    }

    void wagTail() {
        cout << "Dog wags tail!!!!!!!" << endl;
    }
};
class Leopard : public Animal {
       public:
              void roar(){
              cout <<"Leopard roaring!!!!!!" <<endl;
                   }
              void run(){
                   cout<<"Leopard runing!!!!!!!"<<endl;
                   }
      };

int main() {
    cout<<"Action of dog :"<<endl;
    Dog myDog;
    myDog.speak(); 
    myDog.bark();
    myDog.move();  
    myDog.wagTail();
    cout<<"Action of Leopard"<<endl;
    Leopard myLeopard;
    myLeopard.speak();
    myLeopard.roar();
    myLeopard.move();
    myLeopard.run();

    return 0;
}
