#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n=5;
    do
    {
        j=1;
        do
        {
            cout<<"\t"<<n;
            j++;
        }while(j<=5);
        cout<<"\n";
        i++;
        n--;
    }while(i<=5);
}