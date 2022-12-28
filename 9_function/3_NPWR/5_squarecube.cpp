#include <iostream>
using namespace std;
int squer()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  return num*num;
}
int cube()
{
  int num;
  return num*num*num;
}
int main()
{
  int sq,cu;
  sq=squer();
  cu=cube();
  cout<<"\n squer="<<sq;
  cout<<"\n cube="<<cu;
}