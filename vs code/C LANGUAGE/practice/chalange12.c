#include <stdio.h>
int main()
{int a,b;
   for ( a = 1; a <=20; a++)
   {
    for ( b = 2; b <=20; b++)
    {
        
        printf("%6d\t",(a*b));
    }
    printf("\n");
   }
   

    return 0;
}