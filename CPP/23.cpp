#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArr) / sizeof(intArr[0]);//give size of the array 
    cout << "Original array: ";
    printArray(intArr, n);

    bubbleSort(intArr, n);
    cout << "Sorted array: ";
    printArray(intArr, n);
    //Testing with double array
    double doubleArr[] = {4.5, 3.2, 5.8, 1.9};
    int m = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "Original array (double): ";
    printArray(doubleArr, m);

    bubbleSort(doubleArr, m);
    cout << "Sorted array (double): ";
    printArray(doubleArr, m);

    return 0;
}