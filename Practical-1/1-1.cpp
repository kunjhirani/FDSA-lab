#include <iostream>
using namespace std;

int main()
{
    int n,h;
    cout << "Enter number of items:";
    cin >> n;

    cout<<"enter number of hours:";
    cin>>h;
    
    int arr[n];
    h=h%n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    cout << "Your original array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for(int i=0 ; i<h ; i++)
    {

        int temp = arr[0];
    
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
    
        arr[n - 1] = temp;
    }

    cout << endl;
    cout << "Array after left rotation is" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}