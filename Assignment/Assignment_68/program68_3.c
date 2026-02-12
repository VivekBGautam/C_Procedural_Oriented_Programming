////////////////////////////////////////////////////////////
//
// Required header for program 
//
////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description   : It is a recursive function 
//                  Which Display the pattern
// Input          : Number of patter to print 
// Output         : Display Desired Pattern on Scren
// Date           : 11-02-2026
// Author         : Vivek bHauraj Gautam
//
////////////////////////////////////////////////////////////    
void Display(int No)
{
    if(No >= 1)
    {
        printf("%d\t",No);
        No--;
        Display(No);
    }
}

////////////////////////////////////////////////////////////
//
// Function name : Main
// Description   : It is a entry point of our program 
//
////////////////////////////////////////////////////////////
int main()
{
    int Value = 0;
    printf("Enter the number : ");
    scanf("%d",&Value);

    Display(Value);

    return 0;
}