#include<iostream>
using namespace std;
class Bank
{
        int accno,balance;
        string myname;
    public:
        static int count;
        Bank(int accno,int balance,string myname)
        {
            this->accno=accno;
            this->balance=balance;
            this->myname=myname;
            count ++;
        }
        void getdata()
        {
            cout<<"\n"<<myname<<"-"<<accno<<"-"<<balance;
        }
};
int Bank::count;
int main()
{
    Bank a(101,1500,"Aryan"),m(102,2000,"Meet");//b(103,2500,"Dharmesh"),c(104,3000,"Daya");
    a.getdata();
    m.getdata();
    // b.getdata();
    // c.getdata();
    cout<<"\n No of Accounts ."<<Bank::count;

    return 0;
}