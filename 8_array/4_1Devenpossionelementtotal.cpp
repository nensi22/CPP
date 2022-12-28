#include <iostream>
using namespace std;
int main()
{
  int i,a[10],evensum=0;
  for(i=0;i<10;i++)
    {
      cout<<"enter a["<<i<<"]=";
      cin>>a[i];
    }

  for(i=0;i<10;i+=2)
    {
        cout<<"\n a["<<i<<"]"<<a[i];
        evensum=evensum+a[i];
    }
  cout<<"\n even possition  element="<<evensum;
}