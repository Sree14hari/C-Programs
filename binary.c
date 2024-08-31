#include <stdio.h>
int binarysearch(int arr[], int left, int right, int target)
{
    while (left = right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100], target, n, i;
    printf("enter value of n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter target");
    scanf("%d", &target);
    int index = binarysearch(arr, 0, n - 1, target);
    if (index == -1)
    {
        printf("Target not found\n");
    }
    else
    {
        printf("Target found at index %d\n", index);
    }
    return 0;
}