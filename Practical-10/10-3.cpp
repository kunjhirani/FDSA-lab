#include <iostream>
using namespace std;

const int SIZE = 10;

int hash1(int id) {
    return id % SIZE;
}

int hash2(int id) {
    return 7 - (id % 7);
}

int main() {
    int table[SIZE];

    for (int i = 0; i < SIZE; i++) {
        table[i] = -1;
    }

    int n, id;
    cout << "Enter number of student IDs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> id;

        int index = hash1(id);
        int step = hash2(id);
        int j = 0;

        while (j < SIZE && table[index] != -1) {
            index = (hash1(id) + (j + 1) * step) % SIZE;
            j++;
        }

        if (j < SIZE && table[index] == -1) {
            table[index] = id;
            cout << "Student ID " << id
                 << " stored at slot " << index << endl;
        } else {
            cout << "Hash table is full. ID "
                 << id << " cannot be inserted.\n";
        }
    }

    cout << "\nFinal Hash Table:\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Slot " << i << ": ";
        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];
        cout << endl;
    }

    return 0;
}