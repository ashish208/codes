#include <stdio.h>
int factorial(int num)
{
    if (num == 1 , num == 0)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int number;
    printf("enter no.");
    scanf("%d",&number);
    printf("\nfactorial of %d is %d", number, factorial(number));
    return 0;
}
