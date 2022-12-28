#include<iostream>
int main()
{
    int s1,s2,s3,s4,total;
    float per;
    std::cout<<"enter cham=";
    std::cin>>s1;
    std::cout<<"enter eng=";
    std::cin>>s2;
    std::cout<<"enter guj=";
    std::cin>>s3;
    std::cout<<"enter sci=";
    std::cin>>s4;
    total=s1+s2+s3+s4;
    std::cout<<"\ntotal="<<total;
    per=total/4;
    std::cout<<"\nper="<<per;

}