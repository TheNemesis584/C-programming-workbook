//////////////////////////////////////////////////////////////////////////////////////
//Banja Luka                                                                        //
//Bosnia and Herzegovina                                                            //
//                                                                                  //
//author: Djordje Topic - student of Faculty of Electrical Engineering - Banja Luka //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////

/* Write a program which imeplements a function pow, ie. calculating a value of a^n */

#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int a, n, i, k = 1;

        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter n: ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++)
        {
            k *= a;
        }

        printf("pow(a, n) = %d", k);

    return 0;
    }
