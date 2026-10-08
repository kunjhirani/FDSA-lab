#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> patients;
    int choice;
    string name;

    do {
        cout << "1. Patient Arrives\n";
        cout << "2. Attend Patient\n";
        cout << "3. Show Front Patient\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter patient name: ";
                cin >> name;

                patients.push(name);
                cout << name << "added.\n";
                break;

            case 2:
                if (patients.empty()) {
                    cout << "No patients are waiting. The ward is empty.\n";
                }
                else {
                    cout << "Attending patient: " << patients.front() << endl;
                    patients.pop();
                }
                break;

            case 3:
                if (patients.empty()) {
                    cout << "No patients are waiting.\n";
                }
                else {
                    cout << "Current front patient: "
                         << patients.front() << endl;
                }
                break;

            case 4:
                cout << "Thank you\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}