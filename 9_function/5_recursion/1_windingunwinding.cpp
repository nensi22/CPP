#include <iostream>
using namespace std;
void fun(int n)
{
  cout<<"\n winding..."<<n;
  if(n<=7)
    fun(n+1);
  cout<<"\n unwinding..."<<n;
}
int main()
{
  cout<<"\n inside main....";
  fun(1);
}