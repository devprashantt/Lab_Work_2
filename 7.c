#include <stdio.h>
int main()
{
    int r, c, i, j, matrix[50][50], arr1[50], arr2[50];
    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);
    printf("Enter the elements.\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Element %d, %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        arr1[i] = 0;
        for (j = 0; j < c; j++)
        {
            arr1[i] = arr1[i] + matrix[i][j];
        }
        printf("Sum of row %d= %d\n", i + 1, arr1[i]);
    }
    for (i = 0; i < c; i++)
    {
        arr2[i] = 0;
        for (j = 0; j < r; j++)
        {
            arr2[i] = arr2[i] + matrix[j][i];
        }
        printf("Sum of column %d= %d\n", i + 1, arr2[i]);
    }
    return 0;
}
