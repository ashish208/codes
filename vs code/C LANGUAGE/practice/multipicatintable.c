#include<stdio.h>
int main()
{ int a,i;
 printf("multipication table of \t");
 scanf("%d",&a);
 for ( i = 1; i < 11; i++)
 {
     printf("%d x %d = %d \n",a,i,a*i);
 }
 



    return 0;
}