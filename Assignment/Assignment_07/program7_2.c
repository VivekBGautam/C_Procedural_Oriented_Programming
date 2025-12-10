////////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number from user and prints numbers 
//                  from 1 till that number.
//  Input         : Integer (iNo)
//  Output        : Prints sequence of numbers
//  Other Name    : Vivek Bhauraj Gautam
//  Date          : 22/10/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function : main
//  Description          : Takes input from user and calls Display()
//  Returns              : Integer
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
