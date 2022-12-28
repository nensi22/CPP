#include <iostream>
using namespace std;
class Car
{
  int num;
  public:
  void set_no(int n) //setter
  {
    num=n;
  }
  int get_no()   //getter
  {
    return num;
  }

};
int main()
{
  Car kiaseltors;
  kiaseltors.set_no(108);
  cout<<"\n car no:"<<kiaseltors.get_no();
}