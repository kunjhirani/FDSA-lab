#include <iostream>
using namespace std;

int binarySearch(int n, int key, int arr[], int low, int high)
{
    
    if(low>high)
    return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        return binarySearch(n,key,arr,mid+1,high);
    }
    else
    {
        return binarySearch(n,key,arr,low,mid-1);
    }
    

}

int main()
{
    int n,key;
    cout<<"enter number of book IDs:";
    cin>>n;
    int arr[n],low=0,high=n-1;
    cout<<"enter "<<n<<" book IDs:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the book you want to find:";
    cin>>key;
    int position=binarySearch(n,key,arr,0,n-1);
    if(position!=-1)
    {
        cout<<"book is at position "<<position;
    }
    else
    {
        cout<<"book not found!";
    }
    return 0;
    
}