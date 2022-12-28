#include <iostream>
using namespace std;
int main()
{
  int a[3][3][3],i,n,f;
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          for(f=0;f<3;f++)
            {
              cout<<"enter a["<<i<<"]["<<n<<"]["<<f<<"]=";
              cin>>a[i][n][f];
            }
        }
    }
  for(i=0;i<3;i++)
    {
      for(n=0;n<3;n++)
        {
          for(f=0;f<3;f++)
            {
              cout<<"\t "<<a[i][n][f];
            }
          cout<<"\n";
        }
      cout<<"\n";
    }
 return 0;
}