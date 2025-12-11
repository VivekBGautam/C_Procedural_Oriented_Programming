// Input :  12  2     Output : true
// Input :  12  3     Output : true
// Input :  12  5     Output : false
// Input :  12  12    Output : true
// Input :  12  7     Output : false

#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("enter the first Number :\n");
    scanf("%d",&iValue1);

    printf("enter the second Number :\n");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("it is completly Divisible :\n");
    }
    else 
    {
        printf("it is Not Divisible :\n");
    }

    return 0;
}