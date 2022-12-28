#include<iostream>
int main()
{
    int i,j;
    char n=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            std::cout<<"\t"<<n++;
        }
        std::cout<<"\n";
    }
    return 0;
}