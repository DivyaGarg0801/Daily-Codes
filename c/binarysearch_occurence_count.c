#include <stdio.h>

// Function to perform binary search for the first occurrence
int firstOccurrence(int arr[], int low, int high, int target) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            result = mid;  // Potential first occurrence found
            high = mid - 1; // Search in left half
        } 
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to perform binary search for the last occurrence
int lastOccurrence(int arr[], int low, int high, int target) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            result = mid;  // Potential last occurrence found
            low = mid + 1; // Search in right half
        } 
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to count occurrences of an element
int countOccurrences(int arr[], int size, int target) {
    int first = firstOccurrence(arr, 0, size - 1, target);
    if (first == -1) return 0; // Element not found

    int last = lastOccurrence(arr, 0, size - 1, target);
    return last - first + 1;
}

// Driver code
int main() {
    int arr[] = {1,2,2,2,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = countOccurrences(arr, size, target);

    if (count > 0)
        printf("Element %d occurs %d times.\n", target, count);
    else
        printf("Element %d not found.\n", target);

    return 0;
}
