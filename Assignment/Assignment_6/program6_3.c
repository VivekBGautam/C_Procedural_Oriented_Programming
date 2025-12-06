// Write A program which Accept the number from user and acheck wether that number is greater than 100 or Not

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckGraterOrNot
//  Description     :   Used to check given number is greater than 100 or not
//  Input           :   Integer
//  Output          :   It will return true if number is greater than 100 else return false
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   21/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckGraterOrNot(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckGraterOrNot(iValue);

    if(bRet == true)
    {
        printf("%d is greater than 100 ",iValue);
    }
    else
    {
        printf("%d is Less than 100 ",iValue);
    }

    return 0;
}