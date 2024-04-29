#include<iostream>
using namespace std;

class Bank{
  private:
  char name[40],acc_type[40];
  int bal,acc_no;
  
  public:
  Bank(){
      cout<<"enter the bank name :";
      cin.getline(name,40);
      cout<<"enter the account type :";
      cin.getline(acc_type,40);
      cout<<"enter the remaining balance :";
      cin>>bal;
      cout<<"enter the account number :";
      cin>>acc_no;
  }
  
  void Deposit(int amt){
      bal = bal + amt;
      cout<<"the balance after amount deposit :"<<bal<<endl;
      system("pause");
  }
  
  void Withdraw(int amt){
      if(amt>bal){
          cout<<"you can't withdraw!!!!!"<<endl;
      }
      else {
          bal = bal - amt;
          cout<<"balance after withdrawal = "<<bal<<endl;
      }
      system("pause");
  }
  
  void Display(){
      cout<<"---------ACCOUNT DETAIL---------"<<endl;
      cout<<"Account name :"<<name<<endl;
      cout<<"Account type :"<<acc_type<<endl;
      cout<<"Remaining balance :"<<bal<<endl;
      cout<<"Account number :"<<acc_no<<endl;
      system("pause");
  }
  
};

int main(){
    Bank b1;
    int amount,choice;
    do{
      system("cls");
      cout<<"enter your choice :"<<endl;
      cin>>choice;
      cout<<"---------MAIN MENU-------"<<endl;
      cout<<"1.money deposit :"<<endl;
      cout<<"2.money Withdraw :"<<endl;
      cout<<"3.Display money :"<<endl;
       cout<<"Quit!!!!!"<<endl;
       
       switch(choice){
           case 1:
           cout<<"enter the amount deposit"<<endl;
           cin>>amount;
           b1.Deposit(amount);
           break;
           
           case 2:
           cout<<"enter the amount to Withdraw"<<endl;
           cin>>amount;
           b1.Withdraw(amount);
           break;
           
           case 3:
           b1.Display();
           break;
           
           case 4:
           exit(0);
           
       }
      
    }while(1);
}
