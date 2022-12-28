#include <iostream>
using namespace std;
class Recursion
{
    int n;
    public:
    int fact(int );
};
int Recursion::fact(int n)
    {
        
         if(n<=1)
            return 1;
        else
            return n*fact(n-1);
        
    // cout<<"\n factorial of "<<n<<" "<<fact(n);
    }
int main()
{
 
    Recursion obj;
    int n;
    cout<<"enter n=";
    cin>>n;
    obj.fact(n);
    cout<<"\n factorial of "<<n<<"! "<<"is "<<obj.fact(n);
}