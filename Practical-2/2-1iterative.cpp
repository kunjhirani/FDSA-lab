#include<iostream>
using namespace std;
int main()
{
    int n,key,search=0;
    cout<<"enter number of car plates:";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" car plates"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the car plate you want to enter:";
    cin>>key;
    for(int i=0 ; i<n ;i++)
    {
        if(arr[i]==key)
        {
            search=i+1;
        }
    }
    cout<<"plate is found at position:"<<search;
    return 0;
}