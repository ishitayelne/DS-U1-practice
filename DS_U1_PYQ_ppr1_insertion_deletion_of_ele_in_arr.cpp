//Paper 1
//Q.1 B: Analyse the insertion algorithm of adding an element at any position in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    // Get array input
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Get insertion details
    cout << "Enter position to insert at (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    // Shift elements to the right to make space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++; // Increment array size

    /*
    // Deletion of array element
    // Shift elements to the left to overwrite the element at 'pos'
    for (int i = pos; i < (n-1); i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrement array size
    */

    // Output updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
