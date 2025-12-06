 // Accept number form user and Check Number is Positive Or Negetive Or Zero

 ////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Description     :   used to Check number is positive or negative
//  Input           :   Integer
//  Output          :   It give the output as number is positive or negative
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0 )
    {
        printf("%d is Positive Number \n",iNo);
    }
    else if(iNo < 0 )
    {
        printf("%d is Negetive Number \n",iNo);
    }
    else
    {
        printf("Number is Zero(O)");
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

    CheckNumber(iValue);

    return 0;
}