#include <stdio.h>
int main()
{
    int n, i, a, b,arr[50],arr2[50];

    printf("How many elements you want to enter?: ");
    scanf("%d", &n);
   
    for (i = 0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element: ");
    scanf("%d", &a);
        
    for (i = 0; i<n; i++)
    {
        if (arr[i]==a)
        {
            b = i;
            break;
        }
    }
    printf("The element is present at %d position.\n", b);
    return 0;
}
