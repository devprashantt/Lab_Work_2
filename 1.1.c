#include<stdio.h>
int main()
{
    int list[50],n,i,smallest,position;
    printf("how many elements do you want to add in list?\n");
    scanf("%d",&n);
    for(int i = 0; i<n; i++) 
    {
        scanf("%d", &list[i]);
    }

    smallest = list[0];

    position = 0;

    for(int i = 0; i < n; i++) 
    {
        if (list[i]<smallest)
        {
            smallest = list[i];
            position = i+1;
        }
    } 
    printf("smallest number is - %d and position is - %d",smallest,position);
return 0; 
}