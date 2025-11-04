#include<iostream>
using namespace std;
int main()
{
    string line;
    cout<<"enter a line";
    getline(cin,line);
    if(line[0]=='/'&& line[1]=='/')
    {
        cout<<"single line comment";
    }
    else if (line[0]=='/'&&line[1]=='*'&&line[line.length()-2]=='*'&&line[line.length()-1]=='/')
    {
        cout<<"multi-line comment";

    }
    else
        cout<<"not a comment";
}
