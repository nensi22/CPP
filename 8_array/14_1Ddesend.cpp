#include <iostream>
using namespace std;
int main()
{
  int i,a[5],temp,j;
  for(i=0;i<=4;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];
    }
  for(i=0;i<=4;i++)
    {
      for(j=0;j<=4;j++)
        {
          if(a[i]>=a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    cout<<"  <--";
  for(i=0;i<=4;i++)
    {
      
      cout<<"\t "<<a[i];
    }
}