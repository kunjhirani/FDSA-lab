#include<iostream>
using namespace std;

int linearSearch(int i,int arr[],int n, int key)
{
    if(i>=n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return linearSearch(i+1,arr,n,key);
}

int main()
{
    int key,n,i=0;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to find:";
    cin>>key;
    int position = linearSearch(0,arr,n,key);
    if(position!=-1)
    {
        cout<<"element found at position:"<<position+1;
    }
    else
    {
        cout<<"element not found!";
    }
}
    