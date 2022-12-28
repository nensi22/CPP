#include<iostream>
int main()
{
    int a,b,multi,addi;
    std::cout<<"enter a=";
    std::cin>>a;
    std::cout<<"enter b=";
    std::cin>>b;
    addi=a+b;
    multi=a*b;
    std::cout<<"\naddi="<<addi;
    std::cout<<"\n multi="<<multi;
    if(multi%addi==0)
    {
        std::cout<<"\nultiplication is devise by addition";
    }\
    else\
    {\
        std::cout<<"\nultiplication is not devise by addition";
    }
}