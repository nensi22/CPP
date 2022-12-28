#include <iostream>
using namespace std;
void squercube(int num)
{
  cout<<"\n squer="<<num*num;
  cout<<"\n cube="<<num*num*num;
}
int main()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  squercube(num);
}