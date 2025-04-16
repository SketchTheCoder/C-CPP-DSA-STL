//Multiplication of two matrix....
#include <iostream>
using namespace std;

int main() {
    int r1, c1,r2,c2;
    
    cout << "Enter number of rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if(c1!=r2)
       { cout<<"Not possible!!";
    return 0;
}
    
    int firstMatrix[r1][c1];
    int  secondMatrix[r2][c2];
    int resultMatrix[r1][c2];
    
    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> firstMatrix[i][j];
        }
    }
   
    
 
    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j <c2; j++) {
            cin >> secondMatrix[i][j];
        }
    }
    
 
    
    
    // Multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < r1; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    
    
    // Display result
    cout << "Matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
