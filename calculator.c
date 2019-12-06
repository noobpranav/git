#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter first number :- ");
    scanf("%d",&x);
    printf("Enter second number :- ");
    scanf("%d",&y);

    printf("\n**MENU**");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice\n");
    scanf("%d",&z);
    switch(z)
    {
        case 1: printf("Addition: %d\n",x+y);
                break;

        case 2: printf("subtraction: %d\n",x-y);
                break;

        case 3: printf("multiplication: %d\n",x*y);
                break;

        case 4: if(y == 0)
                {
                    printf("Denominator is zero");
                }
                else
                {
                    printf("division: %d\n",x/y);
                }

                break;
        default: printf("\nEnter correct choice");
                break;
    }

    return 0;
}