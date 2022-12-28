// ofstream=stream class to write on files
// ifstream=stream class to read from files
// fstream=stream class to both read and write from/to files

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"\n Welcome to SkillQode";
        filestream<<"\n after celebration";

        filestream.close();
    }
    else
    {
        cout<<"\n file opening is fail";  
    }
        return 0;
}