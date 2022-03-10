/***********
        Final Output for Computer Programming 1
                    by: Lesion, Jhey Nan Jhon P.
                                        *************/

#include<stdio.h>
int main(void)
{
    int x;
        char response0, response1, response2;

        printf("Good Day!\nWhat would you like to check?\n\nEnter(0) Calculate BMI  [Assignment & Input/Output Statements]\nEnter(1) Odd Program    [if Else]\nEnter(2) BMI Classification  [if else Ladder]\n");
        printf("ENTER(3) Multiplication Table 1 to 15     [while loop]\nENTER(4) SILLY program Version V.2    [for loop]\nENTER(5) SILLY program V.3  [do-while loop]\n");
        printf("\nEnter Your Choice:");
        scanf("%d",&x);

    float wgth, bmi, hgth;
    int age, count, n;

        switch (x)
        {
        case 0: printf("\nEnter Your Weight:");
                scanf("%f",&wgth);
                printf("Enter Your Height(Meter):");
                scanf("%f",&hgth);
                bmi= wgth/(hgth*hgth);
                printf("\nYour BMI is : %f",bmi);
                break ;
        case 1: printf("Are You Tired? Y/N:");
                scanf("%c",&response0);
                getchar();
                if (response0!='Y')
                {
                    printf("Okay then Start coding");
                }
                else
                {
                    printf("Take a Rest or Nap");
                }
                break;
        case 2:printf("\nEnter Your BMI:",bmi);
                scanf("%f",&bmi);
                if(bmi < 18.5)
                {
                    printf("\nYour BMI category is: UNDERWEIGHT\n");
                }
                else if(bmi >= 18.6 && bmi <= 24.9)
                {
                    printf("\nYour BMI category is: NORMAL\n");
                }
                else if(bmi >= 25.0 && bmi <= 29.9)
                {
                    printf("\nYour BMI category is: OVERWEIGHT\n");
                }
                else if(bmi >= 30.0 )
                {
                    printf("\nYour BMI category is: OBESE\n");
                }
                else
                {
                    printf("\nWrong entry\n");
                }
                break;
        case 3: count=1;
                printf("\n1 to 15 Multiplication Table of the chosen Multiplier\n");
                printf("Enter a Number:");
                scanf("%d",&n);
                while(count<=15)
                {
                    int product;
                    product= n*count;
                    printf("%d x %d = %d\n", n, count, product);
                    count++;
                }
                return 0;
                break;
        case 4:printf("\n SILLY Program V.2\n");
                for(;response1!='Y';)
                {
                    printf("Do you Like the Program? Y/N:");
                    scanf("%c",&response1);
                    getchar();
                    printf("\nOkay!\n");
                }
                printf("Sana All!\n");
                return 0;
                break;
        case 5:  printf("\nSILLY Program V.3\n");
                do
                {
                    printf("Do you Love the Program? Y/N: ");
                    scanf("%c", &response2);
                    getchar();
                    count++;
                }
                while(response2 != 'Y');
                return 0;
                break;
        default:
                printf("ERROR");
        }

}
