#include <iostream>
#include <string>
using namespace std;

int main() {
    string currentPage;

    cout << "Enter first page: ";
    cin >> currentPage;

    struct Node {
        string page;
        Node* next;
    };

    Node* top = nullptr;

    int operations;
    cout << "Enter number of operations: ";
    cin >> operations;

    for (int i = 0; i < operations; i++) {
        string operation;

        cout << "\nEnter operation (visit/back): ";
        cin >> operation;

        if (operation == "visit") {
            string newPage;

            cout << "Enter page to visit: ";
            cin >> newPage;

            Node* newNode = new Node;
            newNode->page = currentPage;
            newNode->next = top;
            top = newNode;

            currentPage = newPage;

            cout << "Visited: " << currentPage << endl;
            cout << "Current page: " << currentPage << endl;
        }

        else if (operation == "back") {
            if (top == nullptr) {
                cout << "No previous page available." << endl;
                cout << "Current page: " << currentPage << endl;
            }
            else {
                Node* temp = top;

                currentPage = top->page;
                top = top->next;

                delete temp;

                cout << "Going back..." << endl;
                cout << "Current page: " << currentPage << endl;
            }
        }

        else {
            cout << "Invalid operation!" << endl;
        }
    }

    // Free remaining history
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}