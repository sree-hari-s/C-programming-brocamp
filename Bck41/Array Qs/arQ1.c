//find nth largest element in an array
#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int l, int r)
{
    // use last element as pivot
    int x = arr[r], i = l;

    // move larger elements to left of pivot and smaller elements to right of it
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] >= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int nthLargest(int arr[], int l, int r, int n)
{
    // if n is smaller than number of elements in array
    if (n > 0 && n <= r - l + 1) {

        // partition the array around last element
        int index = partition(arr, l, r);

        // if position is same as n, return element
        if (index - l == n - 1)
            return arr[index];

        // if position is more, recur for left subarray
        if (index - l > n - 1)
            return nthLargest(arr, l, index - 1, n);

        // otherwise recur for right subarray
        return nthLargest(arr, index + 1, r, n - index + l - 1);
    }

    return INT_MAX;
}

int main()
{
    int data[] = {5, -2, 0, -3, 3, 6, -6};
    int n = sizeof(data)/sizeof(int);
    printf("%d", nthLargest(data, 0, n - 1, 1));
    printf("\n");
    return 0;
}
