#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout<<"Sorted Sheets:";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i] ;
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }
    cout<<"Sorted Sheets:";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i] ;
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    cout<<"Sorted Sheets:";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i] ;
    }
}

int main()
{
    int n, choice;
    cout << "Enter number of answer sheets:";
    cin >> n;
    int id[n];
    cout << "Enter " << n << " sheet IDs:";
    for (int i = 0; i < n; i++)
    {
        cin >> id[i];
    }
    cout << "1- Bubble Sort"<<endl;
    cout << "2- Selection Sort"<<endl;
    cout << "3- Insertion Sort"<<endl;
    cout << "Enter your choice:"<<endl;
    cin >> choice;
    if (choice == 1)
    {
        bubbleSort(id, n);
    }
    else if (choice == 2)
    {
        selectionSort(id, n);
    }
    else if (choice == 3)
    {
        insertionSort(id, n);
    }
    else
    {
        cout << "Enter valid number!";
    }
}