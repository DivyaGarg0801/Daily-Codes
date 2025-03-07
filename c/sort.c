#include <stdio.h>
#include<string.h>
void bubbleSort(char *arr)
{
    int i, j;
    int n = strlen(arr);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void insertionSort(char *arr)
{
    int i, j, key;
    int n = strlen(arr);
    for (i = 0; i < n; i++)
    {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(char *arr)
{
    int i, j;
    int n = strlen(arr);;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {

                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void heapify(char arr[], int n, int i)
{
    int l = (2 * i) + 1, r = (2 * i) + 2, largest = i;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        char temp;
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void buildHeap(char arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void heapSort(char arr[], int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i > 0; i--)
    {

        int temp;
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        
        heapify(arr, i, 0);
    }
}

int partition(char arr[], int low, int high)
{
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low + 1;      // Start from the second element
    int j = high;         // Start from the last element

    while (i <= j)
    {
        // Find elements out of place relative to the pivot
        while (i <= j && arr[i] <= pivot)
            i++;
        while (i <= j && arr[j] > pivot)
            j--;

        // Swap out-of-place elements
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place the pivot in its correct position
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // Return the pivot index
}

// Function to implement Quick Sort
void quickSort(char arr[], int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(char arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    char leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr, if any
    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr, if any
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(char arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}
void removeDuplicates(char arr[], int n)
{

    // If the array is empty or has only one element, no duplicates to remove
    if (n <= 1)
    {
        return;
    }

    int index = 0;

    // Loop through each character of the array
    for (int i = 0; i < n; i++)
    {
        int j;
        // Check if the current character is already in the new result array
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        // If it's not a duplicate, add it to the result array
        if (i == j)
        {
            arr[index++] = arr[i];
        }
    }

    // Null-terminate the array to mark the end of the result string
    arr[index] = '\0';
}
void printArray(char arr[], int size)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main()
{
    char str1[20], str2[20], str3[20], arr[60];
    printf("enter your name");
    scanf("%s", str1);
    printf("enter mothers name");
    scanf("%s", str2);
    printf("enter fathers name");
    scanf("%s", str3);
    int i = 0, k = 0;
    // Copy arr1 into merged array
    while (str1[i] != '\0')
    {
        arr[k++] = str1[i++];
    }
    // Copy arr2 into merged array
    i = 0; // Reset i for arr2
    while (str2[i] != '\0')
    {
        arr[k++] = str2[i++];
    }

    // Copy arr3 into merged array
    i = 0; // Reset i for arr3
    while (str3[i] != '\0')
    {
        arr[k++] = str3[i++];
    }

    // Null-terminate the merged array
    arr[k] = '\0';

    int ch, n = strlen(arr);
    removeDuplicates(arr, n);
    n = strlen(arr);

    do
    {
        printf(" 1.insertion sort \n 2. Bubble sort \n 3. selection sort \n  4. quick sort \n 5. heap sort \n 6. merge sort \n  7. print array");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertionSort(arr);
            break;
        case 2:
            bubbleSort(arr);
            break;
        case 3:
            selectionSort(arr);
            break;
        case 4:
            quickSort(arr, 0, n - 1);
            break;
        case 5:
            heapSort(arr, n);
            break;
        case 6:
            mergeSort(arr, 0, n - 1);
            break;
        case 7:
            printArray(arr, n);
            break;
        default:
            printf("wrong choice entered");
            break;
        }
    } while (ch <= 7);
}
