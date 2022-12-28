#include <iostream>
using namespace std;
int roll,s1,s2,s3,total,rollno;
char str[100];
float per;
void print()
{
  cout<<"\n student name="<<str;
  cout<<"\nstudent roll No.="<<rollno;
  cout<<"\neng="<<s1;
  cout<<"\ncham="<<s2;
  cout<<"\nbio="<<s3;
  cout<<"\nall subject total="<<total;
  cout<<"\npercentage="<<per;
  if(per>=75)
  {
    cout<<"\n grade A";
  }
  else if(per>=65)
  {
    cout<<"\n grade B";
  }
  else if(per>=55)
  {
    cout<<"\n grade C";
  }
  else if(per>=45)
  {
    cout<<"\n grade D";
  }
  else
  {
    cout<<"\n grade E";
  }
}
void calculate()
{
  total=s1+s2+s3;
  per=total/3;
  print();
}
void getdata()
{
  cout<<"enter student name=";
  cin>>str;
  cout<<"enter roll number=";
  cin>>rollno;
  cout<<"enter eng=";
  cin>>s1;
  cout<<"enter cham=";
  cin>>s2;
  cout<<"enter bio=";
  cin>>s3;
  calculate();
}
int main()
{
  getdata();
}