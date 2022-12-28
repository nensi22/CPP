#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
        int rollno;
        char name[20];
    public:
        void read();
        void display();
};
class Mark:public Student
{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        void getmark();
        void putmark();
};
class Result:public Mark
{
    protected:
        int total;
        float per;
        char division[20];
    public:
        void process();
        void printresult();
};
void Student::read()
{
    cout<<"enter student's name=";
    cin>>name;
    cout<<"enter Roll No=";
    cin>>rollno;
}
void Student::display()
{
    cout<<"\n strudent's name="<<name;
    cout<<"\n Roll No="<<rollno;
}
void Mark::getmark()
{
    cout<<"enter mark of first subject=";
    cin>>s1;
    cout<<"enter mark of second subject=";
    cin>>s2;
    cout<<"enter mark of third subject=";
    cin>>s3;
}
void Mark::putmark()
{
    cout<<"\n First subject="<<s1;
    cout<<"\n Second subject="<<s2;
    cout<<"\n Third subject="<<s3;
}
void Result::process()
{
    total=s1+s2+s3;
    per=total/3.0;
    per>=70? strcpy(division,"First"):per>=50? strcpy(division,"Second"):strcpy(division,"Third");
}
void Result::printresult()
{
    cout<<"\n Total="<<total;
    cout<<"\n Percentage="<<per;
    cout<<"\n Devision="<<division;
}
int main()
{
    Result stdnt;
    stdnt.read();
    stdnt.getmark();
    stdnt.process();
    stdnt.display();
    stdnt.putmark();
    stdnt.printresult();
}