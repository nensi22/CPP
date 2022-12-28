#include <iostream>
using namespace std;
int main()
{
  int i,a[10],oddsum=0;
  for(i=1;i<=10;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];
    }

  for(i=1;i<=10;i+=2)
    {
      if(a[i]%2==1)
      {
        cout<<"\n a["<<i<<"]"<<a[i];
        oddsum=oddsum+a[i];
      }
    }
  cout<<"\n odd  element="<<oddsum;
}