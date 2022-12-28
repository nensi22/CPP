#include<iostream>
#include<string>
using namespace std;
class Book
{
    private:
    int bookno,n;
    string booktitle;
    float price,tcost;
    void totalcost(int n)
    {
        tcost=price*n;
		cout<<tcost;
    }
    public:
    void input();
    void purchase();
};
void Book::input()
{
    cout<<"enter no of book=";
    cin>>bookno;
    cout<<"enter titel of book=";
    fflush(stdin);
    getline(cin,booktitle);
    // cin>>booktitle;
    cout<<"enter price of book=";
    cin>>price;
}
void Book::purchase()
{
    cout<<"enter copeis of book=";
    cin>>n;
    cout<<"totalcost=";
    totalcost(n);
}
int main()
{
    Book bk;
    bk.input();
    bk.purchase();
}