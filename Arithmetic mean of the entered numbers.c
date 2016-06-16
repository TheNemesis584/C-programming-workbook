//////////////////////////////////////////////////////////////////////////////////////
//Banja Luka                                                                        //
//Bosnia and Herzegovina                                                            //
//                                                                                  //
//author: Djordje Topic - student of Faculty of Electrical Engineering - Banja Luka //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////

/* The user enters the numbers on keyboard until he enter 0 ( zero ). Program needs to print out
in the console arithmetic mean of the inputed numbers */

#include<stdio.h>

int main()
    {
        int i = 0, number, s = 0; // s is sum of the entered numbers
        double am;  // am is arithmetic mean

        do
        {
            printf("Enter the number: ");
            scanf("%d", &number);

            s += number;
            i++;

        }while(number != 0.0);

        i -= 1;
        am = s/i;

        printf("%.2f", am);


      return 0;
}
