#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("file3.txt");
    cout<<"writing to a txt file : "<<endl;
    cout<<"please enter your name : ";
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"please enter your contact : ";
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("file3.txt");
    cout<<"reading from a txt file :"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();

    return 0;
}