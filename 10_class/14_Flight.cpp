#include<iostream>
#include<string>
using namespace std;
class Flight
{
    private:
    int flightnumber;
    string destination;
    float distance,fuel;
    void calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else if (distance>=2000)
        {
            fuel=2200;
        }
        // cout<<"\nfuel :"<<fuel;
    }
    public:
    void feedinfo();
    void showinfo();
};
void Flight::feedinfo()
{
    cout<<"enter flight number=";
    cin>>flightnumber;    
    cout<<"enter destination=";
    fflush(stdin);
    getline(cin,destination);
    // cin>>destination;
    cout<<"enter distance=";
    cin>>distance;

    calfuel();
}
void Flight::showinfo()
{
    cout<<"\n Flight number="<<flightnumber;
    cout<<"\n destination="<<destination;
    cout<<"\n distance="<<distance;
    cout<<"\n fuel="<<fuel;
}
int main()
{
    Flight sit;
    sit.feedinfo();
    sit.showinfo();
}