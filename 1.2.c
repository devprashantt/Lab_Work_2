#include <stdio.h>
int main()
{
    int n, i, a, b;
    int arr[n], arr2[n+1];
    printf("How many elements you want to enter?: ");
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("At what position, do you want to add new value? ");
    scanf("%d", &a);
    printf("Insert the value to add: ");
    scanf("%d", &b);
    for (i=0; i<n+1; i++)
    {
        if (i<a)
        {
            arr2[i] = arr[i];
        }
        if (i==a)
        {
            arr2[i] = b;
        }
        if (i>a)
        {
            arr2[i] = arr[i-1];
        }
    }
    printf("New array is: ");
    for (i=0; i<n+1; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
