//Paper 1
//Analyse the algorithm to reverse the array of size 10 with one example.
#include <iostream>
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
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Get the array elements from the user
    cout << "Enter " << size << " integers space-separated: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
