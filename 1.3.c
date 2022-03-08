#include <stdio.h>
int main()
{
    int n, i, a, b, arr[50], arr2[50];

    printf("How many elements you want to enter?: ");
    scanf("%d", &n);

    for (i = 0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i<n; i++)
    {
        printf("%d Element is - %d",i,arr[i]);
    }
    
    printf("Which element (value) do you want to delete? ");
    scanf("%d", &a);

    for (i = 0; i<n; i++)
    {
        if (arr[i]==a)
        {
            b = i;
            break;
        }
    }
    for (i=0; i<n; i++)
    {
        if (i<b)
        {
            arr2[i] = arr[i];
        }
        if (i>b)
        {
            arr2[i-1] = arr[i];
        }
    }

    printf("New array is: ");
    for (i=0; i<n-1; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
