#include<iostream>
#include<string.h>
using namespace std;

class Player{
    private:
    char name[40];
    char team[40];
    int age;
    
    public:
    Player(){
        cout<<"enter the name of the player :"<<endl;
        cin.getline(name,40);
        cout<<"enter the team :"<<endl;
        cin.getline(team,40);
        cout<<"enter the age :"<<endl;
        cin>>age;
        cout<<endl;
    }
    void input(){
        cout<<"enter the name of the player :"<<endl;
        cin>>name[40];
        cout<<"enter the team :"<<endl;
        cin>>team[40];
        cout<<"enter the age :"<<endl;
        cin>>age;
        cout<<endl;
    }
    void Display(){
        cout<<"name is :"<<name<<endl;
        cout<<"team is :"<<team<<endl;
        cout<<"age is :"<<age<<endl;
        system("pause");
        
    }
    void change(char n[40], char t[40], int a){
        strcpy(name,n);
        strcpy(team,t);
        age = a;
        cout<<endl;
    }
};
int main(){
    Player p;
    int choice;
    do{
        system("cls");
        cout<<"--------main menu---------"<<endl;
        cout<<"1. Input player data :"<<endl;
        cout<<"2. Display player data :"<<endl;
        cout<<"3. change player data :"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"enter choice";
        cin>>choice;
        
        switch(choice){
            case 1:
            p.input();
            break;
            
            case 2:
            p.Display();
            break;
            
            case 3:
            p.change("Rohit sharma","India",36);
            break;
            
            case 4:
            exit(1);
            break;
            
            default:
            cout<<"you enter invalid Number!!!!!!!";
            
        }
    } while(1);

}
