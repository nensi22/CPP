#include <iostream>
using namespace std;
int main()
{
  int a[3][3],i,n;
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"enter a["<<i<<"]["<<n<<"]=";
          cin>>a[i][n];
        }
    }
  cout<<"\n metrix A\n\n";
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"\t "<<a[i][n];
        }
      cout<<"\n";
    }
}