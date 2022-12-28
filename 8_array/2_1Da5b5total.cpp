#include <iostream>
using namespace std;
int main()
{
  int i,a[5],b[5],total[5];
  for(i=0;i<=4;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];
    }
  for(i=0;i<=4;i++)
    {
      cout<<"enter b["<<i<<"]=";
      cin>>b[i];
    }
  for(i=0;i<=4;i++)
    {
      total[i]=a[i]+b[i];
      cout<<"\n a["<<i<<"]"<<a[i]<<" + b["<<i<<"]"<<b[i]<<" = total["<<i<<"]"<<total[i];
    }
}