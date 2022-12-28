#include <iostream>
using namespace std;
int main()
{
  int i,n,a[5][5],uppertraingle=0,lowertraingle=0,totaldaingle=0;
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
              cout<<"\t "<<a[i][n];
        }
      cout<<"\n";
    }
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
            if(i>n)
            {
              lowertraingle+=a[i][n];
            }
        }
    }
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
            if(i<n)
            {
              uppertraingle+=a[i][n];
            }
        }
    }
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
            if(i==n)
            {
              totaldaingle+=a[i][n];
            }
        }
    }
  cout<<"\n total daingle="<<totaldaingle;
  cout<<"\n upper traingle="<<uppertraingle;
  cout<<"\n lower traingle="<<lowertraingle;
 return 0;
}