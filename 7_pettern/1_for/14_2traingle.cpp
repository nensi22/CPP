#include<iostream>
int main()
{
    int i,j,k,sp=1;
    
    for(i=1;i<=9;i++)
    {
        for(k=1;k<=sp;k++)
        {
            std::cout<<" ";
        }
        for(j=9;j>=i;j--)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
        sp++;
    }
    return 0;
}
