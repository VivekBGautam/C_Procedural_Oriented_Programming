////////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number from user and prints all odd 
//                  numbers up to that number.
//  Input         : Integer (iNo)
//  Output        : Prints odd numbers
//  Other Name    : Vivek Bhauraj Gautam
//  Date          : 22/10/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function : main
//  Description          : Takes input from user and calls Pattern()
//  Returns              : Integer
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
