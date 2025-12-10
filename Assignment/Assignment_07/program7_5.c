////////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiple
//  Description   : Accepts a number from the user and prints the first 
//                  5 multiples of that number.
//  Input         : Integer (iNo)
//  Output        : Prints 5 multiples
//  Other Name    : Vivek Bhauraj Gautam
//  Date          : 22/10/2025
//
////////////////////////////////////////////////////////////////////////

void Multiple(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {   
        iMult = iCnt * iNo;
        printf("%d\t", iMult);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function : main
//  Description          : Takes input from user and calls Multiple()
//  Returns              : Integer
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Multiple(iValue);

    return 0;
}
