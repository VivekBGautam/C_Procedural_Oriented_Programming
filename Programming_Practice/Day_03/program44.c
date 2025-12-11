#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1 , int iNo2)
{
    
    if((iNo1 & iNo2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("enter the first Number :\n");
    scanf("%d",&iValue1);

    printf("enter the second Number :\n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1, iValue2);

    if(bRet = true)
    {
        printf("it is completly Divisible :\n");
    }
    else 
    {
        printf("it is Not Divisible :\n");
    }

    return 0;
}