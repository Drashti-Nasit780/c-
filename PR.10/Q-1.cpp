//selection sort
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for (int val : arr) cout << val << " "<<endl;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }

        cout << "Pass " << i + 1 << ": ";
        for (int val : arr) cout << val << " ";
        cout << endl;
    }

    cout << " Final Sorted Array: ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
