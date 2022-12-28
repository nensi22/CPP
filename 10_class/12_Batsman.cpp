#include<iostream>
#include<string>
using namespace std;
class Batsman
{
    private:
    int bcode;
    string bname;
    int innings,notout,runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    public:
    void readdata();
    void displaydata();
};
void Batsman::readdata()
{
    cout<<"enter bcode=";
    cin>>bcode;
    cout<<"enter bname=";
    fflush(stdin);
    getline(cin,bname);
    // cin>>bname;
    cout<<"enter innings=";
    cin>>innings;
    cout<<"enter notout=";
    cin>>notout;
    cout<<"enter runs=";
    cin>>runs;
    calcavg();
}
void Batsman::displaydata()
{
    cout<<"\n bcode="<<bcode;
    cout<<"\n bname="<<bname;
    cout<<"\n innings="<<innings;
    cout<<"\n notout="<<notout;
    cout<<"\n runs="<<runs;
    cout<<"\n bavg="<<batavg;
}
int main()
{
    Batsman bavg;
    bavg.readdata();
    bavg.displaydata();
}