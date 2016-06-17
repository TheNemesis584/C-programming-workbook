/* Napisati program koji implementuje funkciju pow(a, n), to jest racuna
vrijednost a^n */

#include<stdio.h>

int main()
    {
        int a, n, i, k = 1;

        printf("Unesi a: ");
        scanf("%d", &a);
        printf("Unesi n: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++)
        {
            k *= a;
        }

        printf("pow(a, n) = %d", k);

    return 0;
    }
