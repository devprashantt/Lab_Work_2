#include <stdio.h>
int main()
{
    int n, i, j, temp,arr[100];
    printf("Enter the elements in array: ");
    scanf("%d", &n);
    int ;
    printf("Enter the elements.\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array Using Bubble Sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
