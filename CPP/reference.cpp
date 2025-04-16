#include <iostream>

using namespace std;

int main() {
    int code;
    
    // Input the aircraft system code
    cout << "Enter system code: ";
    cin >> code;

    // Switch statement to handle different cases
    switch (code) {
        case 100:
            cout << "Normal Speed Range" << endl;
            break;
        case 101:
            cout << "Over-Speed Warning! Aircraft is over-speeding." << endl;
            break;
        case 88:
            cout << "Warning: Low Oil Pressure!" << endl;
            break;
        case 187:
            cout << "Critical Error: Engine Failure!" << endl;
            break;
        default:
            cout << "Invalid Code! Please enter a valid system code." << endl;
    }

    return 0;
}
