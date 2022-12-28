#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    int admno;
    string sname;
    float eng,math,sci,total;
    float ctotal()
    {
        total=eng+math+sci;
        return total;
    }

    public:
    void takedata();
    void showdata();
 };   
 void Student::takedata()
    {
        cout<<"enter student's admno=";
        cin>>admno;
        cout<<"\n student's name=";
        fflush(stdin);
        getline(cin,sname);
        // cin>>sname;
        cout<<"\n eng=";
        cin>>eng;
        cout<<"\n meth=";
        cin>>math;
        cout<<"\n sci=";
        cin>>sci;
        ctotal();
    }
    
    void Student::showdata()
    {
        cout<<"\nadmno\tsname\teng\tmath\tsci\ttotal";
        cout<<"\n"<<admno<<"\t"<<sname<<"\t"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<total;
    }
int main()
{
    Student dharmesh;
    dharmesh.takedata();
    dharmesh.showdata();
}