#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);


int main()
{
    int choice,d,c;
    int sum(int a, int b)
    {
        printf("Sum of a & b is: %d",a+b);
        return a+b;
    }
    int sub(int a,int b)
    {
        printf("Sub of a & b is: %d",a-b);
        return a-b;
    }
    int mul(int a,int b)
    {
        printf("Mul of a & b is: %d",a*b);
        return a*b;
    }
    int div(int a,int b)
    {
        printf("Div of a & b is: %d",a/b);
        return a/b;
    }
     printf("Enter the choice:-\n (1 for sum, 2 for sub, 3 for mul, 4 for div)\n");
    scanf("%d", &choice);
    
    printf("Enter two numbers:\n");
    scanf("%d%d", &d, &c);

    switch(choice)
    {
        case 1:
        sum(d,c);
        break;
        
        case 2:
        sub(d,c);
        break;
        
        case 3:
        mul(d,c);
        break;
        
        case 4:
        div(d,c);
        break;
    }
    return 0;
}