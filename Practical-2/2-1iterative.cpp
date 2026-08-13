// A security guard at a parking lot checks vehicles one by one from the entrance to find a car with 
// a specific license plate. Sometimes he starts from the entrance, sometimes he calls a helper 
// who starts from where the guard left off. Given a list of license plates and a target plate, 
// implement both approaches — one that checks plates one by one from the start, and one where 
// the function calls itself to continue checking — and report the position of the target plate if 
// found.
// Describe the approach you used. What happens in your solution if the target plate appears 
// more than once in the list? Does it find the first occurrence, the last, or just any one?
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