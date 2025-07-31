//Merge sort
#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

   
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    
    while (left <= mid) temp.push_back(arr[left++]);

    
    while (right <= high) temp.push_back(arr[right++]);

    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);      
    mergeSort(arr, mid + 1, high); 
    merge(arr, low, mid, high);    
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> arr[i];
    }

    cout << " Original ";
    printArray(arr);

    mergeSort(arr, 0, n - 1);

    cout << " Sorted ";
    printArray(arr);

    return 0;
}

