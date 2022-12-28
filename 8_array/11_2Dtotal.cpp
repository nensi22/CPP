#include <iostream>
using namespace std;
int main()
{
  int i,n,a[5][5],b[5][5],total[5][5];
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
    cout<<"\n\t metrix A \t\t\t metrix B \t\t\t total metrix\n";
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          cout<<"\t "<<a[i][n];
        }
      cout<<"\t";
      for(n=0;n<3;n++)
        {
          cout<<"\t "<<b[i][n];
        }
      cout<<"\t";
      for(n=0;n<3;n++)
        {
          total[i][n]=a[i][n]+b[i][n];
          cout<<"\t "<<total[i][n];
        }
      cout<<"\n";
    }
 return 0;
}