//binary search
#include<iostream>
using namespace std;

int binary_Search_Descending(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        
        else if (arr[mid] > key) {
            low = mid + 1;  
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {56, 50, 45, 34, 30, 15, 13, 4, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = binary_Search_Descending(arr, n, key);

    if (index != -1) {
        cout << "? Element found at index: " << index << endl;
    }
    else {
        cout << " Element not found." << endl;
    }

    return 0;
}

