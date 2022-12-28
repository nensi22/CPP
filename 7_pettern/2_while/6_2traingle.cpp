#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k,sp=1;
    while(i<=5)
    {
        k=1;
        while(k<=sp)
        {
            cout<<" ";
            k++;
        }
        j=5;
        while(j>=i)
        {
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        i++;
        sp++;
    }
    return 0;
}