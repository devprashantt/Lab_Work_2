#include <stdio.h>
int main()
{
    int n, i, j, min, temp, k;
    printf("Enter the elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements.\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        min = arr[i];
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
        for (k = i; k < n; k++)
        {
            if (arr[k] == min)
            {
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
    printf("Sorted array Using Selection Sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
