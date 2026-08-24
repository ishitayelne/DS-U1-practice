//Insertion of element in array
#include <iostream>
using namespace std;

void insertEle(int arr[], int &n, int pos, int val) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2, val = 25;

    insertEle(arr, n, pos, val);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
