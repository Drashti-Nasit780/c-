#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int val : arr) cout << val << " ";
    cout << endl;
}

void merge(vector<int>& arr, int low, int mid, int high, bool ascending) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if ((ascending && arr[left] <= arr[right]) || (!ascending && arr[left] >= arr[right])) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++) arr[i] = temp[i - low];

    cout << "Merging [" << low << "," << high << "]: ";
    printArray(arr);
}

void mergeSort(vector<int>& arr, int low, int high, bool ascending) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid, ascending);
    mergeSort(arr, mid + 1, high, ascending);
    merge(arr, low, mid, high, ascending);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> arr[i];
    }

    int choice;
    cout << "Choose Sort Order: Ascending Descending Enter choice: "<<endl;
    cin >> choice;

    bool ascending = (choice == 1);

    cout << " Original Array: ";
    printArray(arr);

    mergeSort(arr, 0, n - 1, ascending);

    cout << " Final Sorted Array: ";
    printArray(arr);

    return 0;
}

