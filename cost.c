#include<stdio.h>

int main()
{
    int cost;
    int discount;
    printf("Enter the price of bike: ");
    scanf("%d", &cost);
    
    
    if(cost >= 100000)
    {
        discount = cost - cost * 0.15;
        printf("Price after discount: %d\n", discount);
    }
    else if(cost>50000 && cost<=100000)
    {
    	discount = cost - cost * 0.10;
        printf("Price after discount: %d\n", discount);
    }
    else if(cost<=50000)
    {
    	discount = cost - cost * 0.05;
        printf("Price after discount: %d\n", discount);
    }
    else
    {
    	printf("%d\n", cost);
	}

    return 0;
}

