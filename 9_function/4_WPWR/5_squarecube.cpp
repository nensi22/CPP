#include <iostream>
using namespace std;
int  squer(int num)
{
  return num*num;
}
int cube(int num)
{
  return num*num*num;
}
int main()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  cout<<"\n squer="<<squer(num);
  cout<<"\n cube="<<cube(num);
}