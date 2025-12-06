// Accept number form user and Check Number is even or odd

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Description     :   Used to Check number is even or odd
//  Input           :   Integer,Integer,Integer
//  Output          :   it return true if number is even else it return false if number is odd
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number ",iValue);
    }
    else 
    {
        printf("%d is Odd Number ",iValue);
    }

    return 0;
}