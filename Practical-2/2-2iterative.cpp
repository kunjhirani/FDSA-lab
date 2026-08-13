#include <iostream>
using namespace std;

int main()
{
    int low = 0, key, n;

    cout << "Enter the number of books: ";
    cin >> n;

    int arr[n];
    int high = n - 1;

    cout << "Enter " << n << " book IDs in sorted order:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the book ID that you want to find: ";
    cin >> key;

    bool found = false;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            cout << "Book is found at position " << mid;
            found = true;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (!found)
    {
        cout << "Book not available!";
    }

    return 0;
}