#include<iostream>
using namespace std;
class Report
{
    int rollno[2],i;
    string str[2];
    int m1[2],m2[2],m3[2];
    float total[2],per[2];

    void getAvg();
    
    public :

    void readinfo();
    void display();
    

};

void Report::getAvg()
{

    for(i=0;i<2;i++)
    {
        total[i]=m1[i]+m2[i]+m3[i];
        cout<<"total :"<<total;
        per[i]=total[i]/3;
        cout<<"per :"<<per;
    } 
}

void Report::readinfo()
{
for(i=0;i<2;i++)
{
    cout<<"\nenter roll no :";
    cin>>rollno[i];
    cout<<"\nenter name :";
    //  fflush(stdin);
    cin>>str[i];
    cout<<"\nbio :";
    cin>>m1[i];
    cout<<"\neng :";
    cin>>m2[i];
    cout<<"\nchem :";
    cin>>m3[i];
}

getAvg();

}

void Report::display()

{
    readinfo();
    cout<<"\nRoll\tName\tBio\tEng\tChem\tTotal\tPer";
    for(i=0;i<2;i++)
    {
        cout<<"\n"<<rollno[i]<<"\t"<<str[i]<<"\t"<<m1[i]<<"\t"<<m2[i]<<"\t"<<m3[i]<<"\t"<<total[i]<<"\t"<<per[i];
    }
}

int main()
{
    Report stud;
    stud.display();

}