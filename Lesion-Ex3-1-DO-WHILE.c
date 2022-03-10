/***********
    Calculate the Average of Numbers
    building a program using do-while loop structure
                                         ***********/
//by Lesion, Jhey Nan Jhon P.

#include<stdio.h>

    int main(void)
{
        printf("Solve the Average\n");
        int i=0,n, sum,avg,num;
        sum=0;

            printf("How many numbers you want to find Average:");
            scanf("%d",&n);

            printf("Enter the Numbers\n");

        do
        {
            scanf("%d", &num);
            sum=sum+num;
            i++;
        }

        while (i<n);

        avg=sum/n;
        printf("The Average is: %d", avg);

        getch();
        return 0;
}
