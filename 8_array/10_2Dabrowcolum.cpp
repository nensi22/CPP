#include <iostream>
using namespace std;
int main()
{
  int a[3][3],b[3][3],i,n;
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"enter a["<<i<<"]["<<n<<"]=";
          cin>>a[i][n];
        }
    }
    for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"enter b["<<i<<"]["<<n<<"]=";
          cin>>b[i][n];
        }
    }
  cout<<"\n\t metrix A\t\t\t metrix B\n";
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"\t"<<a[i][n];
        }
      cout<<"\t";
      for(n=0;n<3;n++)
        {
          cout<<"\t"<<b[i][n];
        }
      cout<<"\n";
    }
}