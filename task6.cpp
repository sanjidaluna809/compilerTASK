#include<iostream>
using namespace std;
int main(){
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
