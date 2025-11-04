#include<iostream>
using namespace std;
int main()
{
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
