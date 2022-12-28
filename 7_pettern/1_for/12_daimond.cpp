#include<iostream>
int main()
{
    int i,j,k,sp=10,sp1=2;
    for(i=1;i<=10;i++)
    {
        for(k=1;k<=sp;k++)
        {
            std::cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
        sp--;
    }
    for(i=1;i<=9;i++)
    {
        for(k=1;k<=sp1;k++)
        {
            std::cout<<" ";
        }
        for(j=9;j>=i;j--)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
        sp1++;
    }
    return 0;
}
