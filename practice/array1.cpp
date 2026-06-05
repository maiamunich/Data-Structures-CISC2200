/*******************************************************************************
 * File: array1.cpp
 * Author: Maia Munich
 * Course: CISC 2200
 * Description: Practice program demonstrating array sum with call-by-reference.
 *******************************************************************************/

#include <iostream>
using namespace std;

int sum(int a[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += a[i];
    }
    return total;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Sum: " << sum(values, size) << endl;
    return 0;
}
