#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of books borrowed:" << endl;
    cin >> n;

    int arr[n];
    int Id[n];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Book ID " << i + 1 << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                bool alreadyPresent = false;

                for(int x = 0; x < count; x++)
                {
                    if(Id[x] == arr[i])
                    {
                        alreadyPresent = true;
                        break;
                    }
                }

                if(!alreadyPresent)
                {
                    Id[count] = arr[i];
                    count++;
                }

                break;
            }
        }
    }

    if(count == 0)
    {
        cout << "No duplicate book IDs found." << endl;
    }
    else
    {
        cout << "Book IDs borrowed more than once are:" << endl;

        for(int i = 0; i < count; i++)
        {
            cout << Id[i] << endl;
        }
    }

    return 0;
}