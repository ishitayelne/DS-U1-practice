//Paper 1
//Q.1 B: Analyse the insertion algorithm of adding an element at any position in an array.
#include <iostream>
using namespace std;

void insertAtPosn(int arr[], int &n, int capacity, int element, int pos) {
    if (n >= capacity) {
        cout << "Overflow: Array is full." << endl;
        return;
    }
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    n++;
}
