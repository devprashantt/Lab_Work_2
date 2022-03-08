#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum1 = 0, sum2 = 0, arr[50], arr2[50];
    float mean, var, standard_deviation;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
   
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i];
    }
    mean = (sum1 * 1.0) / n;
    printf("The mean is %.3f\n", mean);
    for (i = 0; i < n; i++)
    {
        arr2[i] = pow(arr[i] - mean, 2);
    }
    for (i = 0; i < n; i++)
    {
        sum2 = sum2 + arr2[i];
    }
    var = sum2 * 1.0 / n;
    standard_deviation = pow(var, 0.5);
    printf("Standard Deviation is %.3f", standard_deviation);
    return 0;
}
