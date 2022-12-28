#include<iostream>
#include<string>
using namespace std;
class Report
{
    private:
    int adno;
    string name;
    float marks[5],average;
    void getavg()
    {
        average=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]/5;
    }
    public:
    void readinfo();
    void displayinfo();
};
void Report::readinfo()
{
    cout<<"enter 4 digit admission number=";
    cin>>adno;
    cout<<"enter name=";
    fflush(stdin);
    getline(cin,name);
    // cin>>name;
    for(int i=0;i<=4;i++)
    {
        cout<<"enter sub=["<<i<<"]=";
        cin>>marks[i];
    }
    getavg();
}
void Report::displayinfo()
{
    cout<<"\n 4 digit admission number="<<adno;
    cout<<"\n name="<<name;
    cout<<"\n sub 1="<<marks[0]<<"\n sub 2="<<marks[1]<<"\n sub 3="<<marks[2]<<"\n sub 4="<<marks[3]<<"\n sub 5="<<marks[4];
    cout<<"\n avrage="<<average;
}
int main()
{
    Report student;
    student.readinfo();
    student.displayinfo();
}