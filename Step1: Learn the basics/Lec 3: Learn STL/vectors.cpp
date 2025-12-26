#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1;
    int choice;

    while (true) {
        cout << "\nEnter your choice:\n";
        cout << "Press 1 to enter element\n";
        cout << "Press 0 to exit\n";
        cin >> choice;

        if (choice == 1) {
            int input;
            cout << "Enter element: ";
            cin >> input;
            vector1.emplace_back(input);
        }
        else if (choice == 0) {
            cout << "Ok Bye bye!\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    cout << "\nElements in vector:\n";
    for (int x : vector1) {
        cout << x << " ";
    }

    return 0;
}
