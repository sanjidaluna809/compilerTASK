#include <iostream>
using namespace std;
void run_task1() {
    string c;
    cout << "Enter a string: ";
    cin >> c;
    bool is_number = true;
    for (size_t i = 0; i < c.length(); i++) {
        if (c[i] < '0' || c[i] > '9') {
            is_number = false;
            break;
        }
    }
    if (is_number && c.length() > 0)
        cout << "It is a number.";
    else
        cout << "Not a number.";
}
void run_task2() {
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

void run_task3(){
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

void run_task4() {
   string s;
    cout << "Enter a string: ";
    cin >> s;
    string keywords[] = {"int", "float", "double", "char", "bool", "void", "if", "else", "for", "while"};
    for (int i = 0; i < 10; i++) {
        if (s == keywords[i]) {
            cout << "Not a valid identifier";
            return ;
        }
    }
    if (!((s[0] >= 'A' && s[0] <= 'Z') ||(s[0] >= 'a' && s[0] <= 'z') ||(s[0] == '_')))
        {
        cout << "Not a valid identifier";
        return ;
        }
    for (int i = 1; i < s.length(); i++) {
        if (!((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= '0' && s[i] <= '9') ||(s[i] == '_')))
        {
            cout << "Not a valid identifier";
            return ;
        }
    }
     cout << "Valid identifier";
}
void run_task5() {
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    float sum=0;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Average="<<sum;
}
void run_task6() {
   int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    float sum=0;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        }
        int minval=arr[0];
        int maxval=arr[0];
        for(int i=1;i<n;i++)
        {
            if (arr[i]<minval)
                minval=arr[i];
            if(arr[i]>maxval)
                maxval=arr[i];
        }
        cout<<"minimum"<<minval<<endl;
        cout<<"maximum"<<maxval<<endl;
}
void run_task7() {
    string firstName,lastName;
    cout<<"enter first name:";
    cin>>firstName;
    cout<<"enter last name:";
    cin>>lastName;
    string fullname=firstName+" "+lastName;
    cout<<"full name"<<fullname;
}
int main() {
    int choice;
    do {
        cout << "1. Check if Input is a Number";
        cout << "2. Detect Arithmetic Operators";
        cout << "3. Detect Comments";
        cout << "4. Check Valid Identifier";
        cout << "5. Calculate Array Average";
        cout << "6. Find Min and Max";
        cout << "7. Concatenate Names";
        cout << "0. Exit";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: run_task1(); break;
            case 2: run_task2(); break;
            case 3: run_task3(); break;
            case 4: run_task4(); break;
            case 5: run_task5(); break;
            case 6: run_task6(); break;
            case 7: run_task7(); break;
            case 0: cout << "Exiting program";break;
            default: cout << "Invalid choice";
        }
}
while (choice != 0);
     return 0;
}
