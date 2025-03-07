#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, comparisons = 0, shifts = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Insertion Sort with count tracking
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;

        // Move elements that are greater than key one position ahead
        while (j >= 0 && v[j] > key) {
            comparisons++;  // Count each comparison
            v[j + 1] = v[j]; // Shift operation
            shifts++;  // Count shifts
            j--;
        }
        
        v[j + 1] = key;
        shifts++; // Final shift for inserting the key
    }

    // Output sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << "\nTotal Comparisons: " << comparisons;
    cout << "\nTotal Shifts: " << shifts << endl;

    return 0;
}
