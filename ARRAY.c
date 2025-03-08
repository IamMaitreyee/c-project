#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int add=0, max=0, min=a[4],i;
    for(i=0; i<5; i++)
    {
        add = add+a[i];
        if(min>a[i])
            {
                min=a[i];
            }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Sum: %d\n", add);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    getchar();
    return 0;
}