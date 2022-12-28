#include <iostream>
using namespace std;
int main()
{
  int i,a[5],max;
  for(i=0;i<=4;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];

    }
  for(i=0;i<=4;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
    }
  cout<<"\n largest="<<max;
}