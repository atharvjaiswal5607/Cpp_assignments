#include<iostream>
using namespace std;
class patient
{
  public:
        double bill;
        string date;
              void info(){
                cout<<"The billing amount is "<<bill<<"\n";
                cout<<"The date of appointment is "<<date<<endl;
              }
};
int main(){
  patient P1,P2;
      cout<<"Enter patient 1 bill amount: \n";
      cin>>P1.bill;
      cout<<"Enter patient 1 date: ";
      cin>>P1.date;

      cout<<"Enter patient 2 bill amount: \n";
      cin>>P2.bill;
      cout<<"Enter patient 2 date: ";
      cin>>P2.date;

      cout<<"patient's information:"<<endl;
      P1.info();
      P2.info();
  return 0;
}
