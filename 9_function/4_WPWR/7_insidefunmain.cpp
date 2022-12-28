#include <iostream>
using namespace std;
int main()
{
  int x;
  int myfun(int,int);
  x=myfun(60,30);
  cout<<"\ninside main ..."<<x;
}
int myfun(int n,int m)
{
  cout<<"\n inside myfun....";
  return n+m;
}
