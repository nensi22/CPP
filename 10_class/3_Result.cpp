#include <iostream>
using namespace std;
class Result
{
  int m1,m2,m3,rollno,total;
  char name[100];
  float per;
  public:
  void print()
  {
    cout<<"\nstudent's name="<<name;
    cout<<"\nstudent's roll no.="<<rollno;
    cout<<"\ncham="<<m1;
    cout<<"\nbio="<<m2;
    cout<<"\nphy="<<m3;
    cout<<"\ntotal="<<total;
    cout<<"\npercentage="<<per;
  }
  void  calculate()
  {
    total=m1+m2+m3;
    per=total/3;
    //print();
  }
  void getdata()
  {
    cout<<"enter student name=";
    cin>>name;
    cout<<"roll no=";
    cin>>rollno;
    cout<<"cham=";
    cin>>m1;
    cout<<"bio=";
    cin>>m2;
    cout<<"phy=";
    cin>>m3;
    //calculate();
  }
};
int main()
{
  Result object;
  object.getdata();
  object.calculate();
  object.print();
}