// Factors of 6

#include<stdio.h>

// Good Approach
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
 
}

int main()
{
    int iValue = 0;

    printf("enter the Number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}