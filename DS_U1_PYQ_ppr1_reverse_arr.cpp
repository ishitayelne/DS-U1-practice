//Paper 1
//Analyse the algorithm to reverse the array of size 10 with one example.
#include <iostream>
//#include <utility> // Required for swap
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    //With swap function
    /*while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    */
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    // Get 10 integers from the user
    cout << "Enter " << SIZE << " integers space-separated: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, SIZE);

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
