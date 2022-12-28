// exception handling
#include<iostream>
using namespace std;
int main()
{
    int p,c,m,err=0;
    string name;
    do
    {
       try
       {
        cout<<"\nenter student name = ";
        cin>>name;
        cout<<"enter physics marks = ";
        cin>>p;
        if(!(p>=0 && p<=100))
        {
            throw(p);
        }
        cout<<"enter chamistry marks = ";
        cin>>c;
        if(!(c>=0 && c<=100))
        {
            throw(c);
        }
        cout<<"enter maths marks = ";
        cin>>m;
        if(!(m>=0 && m<=100))
        {
            throw(m);
        }
       }
       catch(int e)
       {
        cout<<"Invalid mark!";
        err=1;
       }
       
        
    } while (err);
    
}