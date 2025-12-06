 // Accept two number form user and check leap year

 ////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Description     :   Used to check input year is leap year or not
//  Input           :   Integer,Integer,Integer
//  Output          :   It will display weather it is leap year or not
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{
    if((iNo % 4) == 0)
    {
        printf("%d is A Leap Year \n",iNo);
    }
    else
    {
        printf("%d is Not A Leap year",iNo);
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

    printf("Enter the Two Number : \n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return 0;
}