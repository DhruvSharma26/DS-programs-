#include <stdio.h>
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int *arr, int n, int key)
{
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int mid = (h + l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] > key)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n, key;
    scanf("%d%d", &n, &key);
    //int z = linearSearch(arr, n, key);
    int z= binarySearch(arr,n,key);
    if (z == -1)
    {
        printf("the element was not found");
    }
    else
    {
        printf("the element is found at index %d", z);
    }
}
