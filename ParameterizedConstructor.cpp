#include<iostream>
using namespace std;
  class addition
{
  public:
  addition(int a, int b)
    {
    int c=a+b;
    cout<<"The sum is:"<<c;
    }
};
int main()
{
  addition ad(20,30);
  return 0;
}
