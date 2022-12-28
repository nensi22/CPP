#include<iostream>
int main()
{
    int i,j,k,sp=10;
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
    
    return 0;
}
