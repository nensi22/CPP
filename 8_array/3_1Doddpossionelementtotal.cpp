#include <iostream>
using namespace std;
int main()
{
  int i,a[10],oddsum=0;
  for(i=0;i<10;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];
    }

  for(i=1;i<=10;i+=2)
    {
    oddsum=oddsum+a[i];
    cout<<"\n a["<<i<<"]"<<a[i];
    }
  cout<<"\n odd position element="<<oddsum;
}