#include <stdio.h>
int main()
{
    int n;
    printf(" Enter no of persons:");
    scanf("%d", n);
    float amount[n], p, q, r;
    puts("Enter amount of each person...");
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", i + 1);
        scanf("%f", amount[i]);
    }
    for (r = 0; r < amount[0]; r++)
        for (q = 0; q < amount[0]; q++)
            for (p = 0; p < amount[0]; p++)
                if ((r * 1 + q * 0.50 + p * 0.25) == amount[0])
                    goto A;
A:
    printf("person 1 RS 50 paisa 25 paisa\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %11.0f% %7.0f% %11.0f%\n", i + 1, r * (amount[i] / amount[0]), q * (amount[i] / amount[0]));
    }
    return 0;
}
