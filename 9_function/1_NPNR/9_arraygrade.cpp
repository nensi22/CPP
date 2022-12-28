#include <iostream>
using namespace std;

int roll[5],m1[5],m2[5],m3[5],total[5],i;
float per[5];
char grade;
void print()
{
  cout<<"\trollno\teng\thind\tguj\ttotal\tper\tgrade";
  for(i=0;i<2;i++)
    {

      if(per[i]>=75)
      {
        grade='A';
      }
      else if(per[i]>=65)
      {
        grade='B';
      }
      else if(per[i]>=55)
      {
        grade='C';
      }
      else if(per[i]>=45)
      {
        grade='D';
      }
      else
      {
        grade='E';
      }
      //printf("\n\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t%c",roll[i],m1[i],m2[i],m3[i],total[i],per[i],grade);
      cout<<"\n\t"<<roll[i]<<"\t"<<m1[i]<<"\t"<<m2[i]<<"\t"<<m3[i]<<"\t"<<total[i]<<"\t"<<per[i]<<"\t"<<grade;
   }
}
void cal()
{
  for(i=0;i<2;i++)
    {
      total[i]=m1[i]+m2[i]+m3[i];
      per[i]=total[i]/3;
    }
  print();
}
void getdata()
{
    for(i=0;i<2;i++)
{
  cout<<"roll=";
  cin>>roll[i];
  cout<<"eng=";
  cin>>m1[i];
  cout<<"hindi=";
  cin>>m2[i];
  cout<<"guj=";
  cin>>m3[i];
  }
  cal();

}
int main()
{
  getdata();
}