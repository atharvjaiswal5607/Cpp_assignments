#include<iostream>
using namespace std;
class myclass
{
  private:
  int x;
  static int count;
  public:
  myclass()
  {
      count++;
  }
static int showcount()
{
  return count;
}
};
int myclass::count=0;
int main()
{
  cout<<"initial count: "<<myclass::showcount()<<endl;
  myclass m1,m2;
  cout<<"after creating objects:"<<myclass::showcount()<<endl;
return 0;
}
