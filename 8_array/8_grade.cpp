#include <iostream>
using namespace std;
int main()
{
  int i,rollno[5],m1[5],m2[5],m3[5],m4[5],total[5];
	char ch,pf;
	float per[5];
  for(i=0;i<4;i++)
    {
      cout<<"enter roll num["<<i<<"]=";
      cin>>rollno[i];
      cout<<"cham["<<i<<"]=";
      cin>>m1[i];
      cout<<"bio["<<i<<"]=";
      cin>>m2[i];
      cout<<"phy["<<i<<"]=";
      cin>>m3[i];
      cout<<"eng["<<i<<"]=";
      cin>>m4[i];
    }
  for(i=0;i<4;i++)
    {
      total[i]=m1[i]+m2[i]+m3[i]+m4[i];
      per[i]=total[i]/4;
    }
cout<<"\nrollno\tmeths\tsci\t1eng\tcham\ttotal\tper\tgrade\tp/f";
  for(i=0;i<4;i++)
    {
      if(m1[i]>=35 && m2[i]>=35 && m3[i]>=35 && m4[i]>=35)
      {
        pf='p';
      }
      else
      {
        pf='f';
      }
        if(per[i]>=75)
				{
					ch='A';
				}
				else if(per[i]>=65)
				{
					ch='B';
				}
				else if(per[i]>=55)
				{
					ch='C';
				}
				else if(per[i]>=40)
				{
					ch='D';
				}
        else
        {
          ch='E';
        }

      cout<<"\n"<<rollno[i]<<"\t"<<m1[i]<<"\t"<<m2[i]<<"\t"<<m3[i]<<"\t"<<m4[i]<<"\t"<<total[i]<<"\t"<<per[i]<<"\t"<<ch<<"\t"<<pf;

    }
}