/* Korisnik unosi brojeve sve dok ne unese broj 0. Program treba da ispise aritmeticku
sredinu tih unijetih brojeva */

#include<stdio.h>

int main()
    {
        int i = 0, br, s = 0;
        double as;

        do
        {
            printf("Unesi broj: ");
            scanf("%d", &br);

            s += br;
            i++;

        }while(br != 0.0);

        i -= 1;
        as = s/i;

        printf("%.2f", as);


      return 0;
    }
