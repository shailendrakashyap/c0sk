#include <stdio.h>
int main (void)
{
    int q = 25, d = 10, n = 5, p = 1;
    int k;

    do
    {
        printf("Enter Change to be given : ");
        scanf("%i", &k);
    }
    while (k < 1);

        if (k < 5)
        {
            printf("%i pennies required \n", k);
        }

        else if (k >= 5 && k < 10)
        {
            int nn;
            nn = k / n;
            printf("%i nickles \n", nn);

                int np;
                np = k - nn * n;
                printf("and %i pennies required. \n", np);
        }

        else if (k >= 10 && k < 24)
        {
            int nd;
            nd = k / d;
            printf("%i dimes, \n", nd);

                int np;
                np = k - nd * d;
                printf("and %i pennies required. \n", np);
    }

    else if (k >= 25)
    {
        int nq;
        nq = k / q;
        printf("%i quarters, \n", nq);

            if ((k - nq * q) >= 10 && (k - nq * q) < 25)
        {
            int nd;
            nd = (k - nq * q) / d;
            printf("%i dimes, \n", nd);

                int np;
                np = (k - nq * q) - nd * d;
                printf("and %i pennies required. \n", np);
    }
        else
            if ((k - nq * q) >= 5 && (k - nq * q) < 10)
        {
            int nn;
            nn = (k - nq * q) / n;
            printf("%i nickles \n", nn);

                int np;
                np = (k - nq * q) - nn * n;
                printf("and %i pennies required. \n", np);
        }    else
                 if ((k - nq * q) < 5)
                {
                int np;
                np = k - nq * q;
                printf("and %i pennies required. \n", np);
                }
    }

    else {}


}
