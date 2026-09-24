#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    cout << "Enter maximum tray capacity: ";
    cin >> n;

    int* stack = new int[n];
    int top = -1;

    int choice;

    do {
        cout << "1. Place tray" << endl;
        cout << "2. Take tray" << endl;
        cout << "3. Show top tray" << endl;
        cout << "4. Show stack status" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            int tray;

            cout << "Enter tray number: ";
            cin >> tray;

            if (top == n - 1) 
            {
                cout << "The stack is FULL!" << endl;
            }
            else 
            {
                stack[++top] = tray;
                cout << "Tray " << tray << " placed successfully." << endl;
                cout << "Current top tray: " << stack[top] << endl;
            }
        }

        else if (choice == 2) 
        {
            if (top == -1) 
            {
                cout << "The stack is EMPTY!" << endl;
            }
            else 
            {
                cout << "Tray " << stack[top] << " taken successfully." << endl;
                top--;

                if (top == -1)
                    cout << "The stack is now empty." << endl;
                else
                    cout << "Current top tray: " << stack[top] << endl;
            }
        }

        else if (choice == 3) 
        {
            if (top == -1) 
            {
                cout << "The stack is empty." << endl;
            }
            else 
            {
                cout << "Top tray: " << stack[top] << endl;
            }
        }

        else if (choice == 4) 
        {
            cout << "Capacity: " << n << endl;
            cout << "Trays currently present: " << top + 1 << endl;

            if (top == -1)
                cout << "Stack EMPTY" << endl;
            else if (top == n - 1)
                cout << "Stack FULL" << endl;
            else
                cout << "Stack has space available." << endl;
        }

        else if (choice == 5) 
        {
            cout << "Thank you" << endl;
        }

        else 
        {
            cout << "Invalid choice! Enter a number from 1 to 5." << endl;
        }

    } while (choice != 5);

    delete[] stack;

    return 0;
}