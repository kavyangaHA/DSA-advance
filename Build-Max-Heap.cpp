#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i;      // Assume root is largest
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) { // If largest is not root, swap and heapify the affected subtree
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Function to convert an array into a Max-Heap
void buildMaxHeap(int arr[], int n) {
    // Start from the last non-leaf node and apply heapify in reverse order
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main() {
    int arr[] = {3, 1, 22, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Build-Max-Heap: ";
    printArray(arr, n);

    buildMaxHeap(arr, n);

    cout << "After Build-Max-Heap: ";
    printArray(arr, n);

    return 0;
}
