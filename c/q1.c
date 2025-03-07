// quick sort
#include<stdio.h>
#define max 100
void bubbleSort(int *arr)
{
    int i, j;
    int n = sizeof(arr)/sizeof(arr[0]);
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
void heapify(int arr[], int n, int i)
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

void buildHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
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
void printarray(int arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[max];
    for(int i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",arr[i]);
    }
    heapSort(arr, n);
    printarray(arr);
    return 0;
}