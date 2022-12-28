#include<iostream>
int main()
{
    int i,j,n=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            std::cout<<"\t"<<n++;
        }
        std::cout<<"\n";
        n+=5;
    }
    return 0;
}