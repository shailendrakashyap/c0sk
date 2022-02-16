/* Program to calculate sum of individuals
 * digits of a single large number
 * with the help of for loops.
 */

#include<stdio.h>

int main(void)

{
    int n, r, sum=0;

    printf("Enter number to calculate its individual digit's sum\n : ");
    scanf("%d" ,&n);


    for(sum=0; n>0; n=n/10)
    {
        r = n % 10;

        printf("%d +" ,r);

        sum = sum + r;

    }

    printf(" = %d is the sum" ,sum);

    return 0;
}
