// NAME: ROHIT MAJI
// ROLL NO. 2010991419
// SET: 3
// Q1


#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    // Common code for odd and even lengths
    for (int i=0; i<n-1; i=i+2)
    {
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    // If length is odd
    if (n & 1)
    {
        for (int i=n-1; i>0; i=i-2)
            if (arr[i] > arr[i-1])
                swap(arr[i], arr[i-1]);
    }
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before rearranging\n";
    printArray(arr, n);
    rearrange(arr, n);
    cout << "After rearranging\n";
    printArray(arr, n);
    return 0;
}
