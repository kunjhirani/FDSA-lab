#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements (only 0, 1, or 2):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int zero = 0, one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 2)
        {
            two++;
        }
    }

    int index = 0;

    while (zero > 0)
    {
        arr[index] = 0;
        index++;
        zero--;
    }

    while (one > 0)
    {
        arr[index] = 1;
        index++;
        one--;
    }

    while (two > 0)
    {
        arr[index] = 2;
        index++;
        two--;
    }

    cout << "Array after sorting: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}