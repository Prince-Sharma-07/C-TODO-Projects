#include<bits/stdc++.h>
using namespace std;

class calculator{
     public:
       calculator(){
        cout<<"Welcome to Calculator!!!    -by Prince Sharma"<<endl;
       }
       void operations(){
        int choice = 0;
        while(choice!=6){
        cout<<endl<<"Please enter the operation you want to perform:"<<endl<<endl<<"1.Addition(+)"<<endl<<"2.Substraction(-)"<<endl<<"3.Multiplication(*)"<<endl<<"4.Division(/)"<<endl<<"5.Modulus(%)"<<endl<<"6.No Thanks"<<endl<<endl;
        cin>>choice;
        switch (choice){
            case 1:{
                addition();
                break;
            }
            case 2:{
                substraction();
                break;
            }
            case 3:{
                multiplication();
                break;
            }
            case 4:{
                division();
                break;
            }
            case 5:{
                modulus();
                break;
            }
            case 6:{
                cout<<endl<<"Thanks for using our Calculator :)"<<endl;
                break;
            }
            default:{
                cout<<"Please enter a valid choice!!!"<<endl;
            }
        }
       }
       }
       void addition(){
        int a , b;
        cout<<"Enter the Numbers :"<<endl;
        cin>>a>>b;
        cout<<"="<<a+b<<endl;
       }

       void substraction(){
        int a , b;
         cout<<"Enter the Numbers :"<<endl;
        cin>>a>>b;
        cout<<"="<<a-b<<endl<<endl;
       }

       void multiplication(){
        int a , b;
         cout<<"Enter the Numbers :"<<endl;
        cin>>a>>b;
        cout<<"="<<a*b<<endl;
       }
      
      void division(){
        int a , b;
         cout<<"Enter the Numbers :"<<endl;
        cin>>a>>b;
        cout<<"="<<a/b<<endl;
      }
      
      void modulus(){
        int a , b;
         cout<<"Enter the Numbers :"<<endl;
        cin>>a>>b;
        cout<<"="<<a%b<<endl;
      }

};


int main(){
    calculator* c = new calculator();
    c->operations();
    return 0;
}