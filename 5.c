#include <stdio.h>
int main()
{
    int n, i, j, key,arr[50];
    printf("Enter the elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements.\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        key = arr[i + 1];
        j = i;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array Using Inserted Sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
