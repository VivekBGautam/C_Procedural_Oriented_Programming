// Factors of 6

#include<stdio.h>

// Good Approach
void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
 
}

// Time Complexcity : O(N);

int main()
{
    int iValue = 0;

    printf("enter the Number :\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}