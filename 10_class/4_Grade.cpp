#include <iostream>
using namespace std;
class Grade
{
  int m1,m2,m3,m4,total,rollno;
  char name[100],grade,pf;
  float per;
  public:
  void print()
  {
    cout<<"\nname\tRollNo.\tcham\tbio\tphy\teng\ttotal\tper\tgrade\tp/f";
    if(per>=75)
    {
      grade='A';
    }
    else if(per>=65)
    {
      grade='B';
    }
    else if(per>=55)
    {
      grade='C';
    }
    else if(per>=45)
    {
      grade='D';
    }
    else
    {
      grade='E';
    }
    if(m1>=35 && m2>=35 && m3>=35 && m4>=35)
    {
      pf='p';
    }
    else
    {
      pf='f';
    }
    cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<total<<"\t"<<per<<"\t"<<grade<<"\t"<<pf;
  }
  void calculate()
  {
    total=m1+m2+m3+m4;
    per=total/4;
    // print();
  }
  void getdata()
  {
    cout<<"student's name=";
    cin>>name;
    cout<<"student's Roll No.=";
    cin>>rollno;
    cout<<"student's mark in cham=";
    cin>>m1;
    cout<<"student's mark in bio=";
    cin>>m2;
    cout<<"student's mark in phy=";
    cin>>m3;
    cout<<"student's mark in eng=";
    cin>>m4;
    // calculate();
  }
};
int main()
{
  Grade object;
  object.getdata();
  object.calculate();
  object.print();
}