 // Accept two number form user and Find Max Number

 ////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindMax
//  Description     :   Used to find maximum number
//  Input           :   Integer,Integer
//  Output          :   Maximum Value out of two number
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Two Number : \n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet = FindMax(iValue1, iValue2);
    printf("%d is A Max Number ",iRet);

    return 0;
}