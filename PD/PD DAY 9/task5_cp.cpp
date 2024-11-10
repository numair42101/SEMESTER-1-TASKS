#include <iostream>
using namespace std;

bool areAllElementsIdentical(string arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[0]) {
            return false;
        }
    }
    return true;
}

int main() {
    string slotMachineOutcome[4];
    cout << "Enter 4 elements for the slot machine outcome: ";
    for (int i = 0; i < 4; i++) {
        cin >> slotMachineOutcome[i];
    }

    if (areAllElementsIdentical(slotMachineOutcome, 4)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}