#include <iostream>
using namespace std;

int main()
{
    int low=0,key,n;
    cout<<"enter the number of books:";
    cin>>n;
    int arr[n],high=n-1;
    cout<<"enter "<<n<<" book IDs:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the book id that you want to find:";
    cin>>key;
    bool found = false;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==key)
        {
            cout<<"book is found at position "<<mid;
            found = true;
            break;
        }
        else if(arr[mid]>key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    if(!found)
    {
        cout<<"book not available!";
    }
    return 0;
}