#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            cout<<"\t"<<n++;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}