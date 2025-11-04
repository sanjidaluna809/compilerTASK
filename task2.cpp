#include<iostream>
using namespace std;
int main(){
    string c;
    int count=1;
    getline(cin,c);
    for(int i=0;i<c.length();i++)
    {
        if(c[i]=='+'||c[i]=='-'||c[i]=='*'||c[i]=='/'||c[i]=='%'||c[i]=='=')
        {
            cout<<"operator"<<count<<":"<<c[i]<<endl;
            count++;

        }
    }
    if(count==1)
        {cout<<"No operators found."<<endl;}
    }
