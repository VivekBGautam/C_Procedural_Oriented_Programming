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
//  Input           :   Integer,Integer,Integer
//  Output          :   Maximum Value out of three number
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2, int iNo3)
{

    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3;
    int iRet = 0;

    printf("Enter the Three Number : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = FindMax(iValue1, iValue2, iValue3);
    printf("%d is A Max Number ",iRet);

    return 0;
}