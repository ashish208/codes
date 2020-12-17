#include <stdio.h>

int main()

{

          int d;

           printf("Enter distance traveled in kms\n");

           scanf("%d",&d);

           float t,speed_car;

           printf("Enter time in mins lost by the train while stopping at stations\n");

           scanf("%f",&t);

           speed_car = (float)(60*d)/(3*t);

           printf("Speed of car :- %f\n", speed_car);



          return 0;

}
