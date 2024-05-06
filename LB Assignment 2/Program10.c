#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    while (iFrequency>0)
    {
        printf("%d",iNo);
        iFrequency--;
    }
}
int main()
{
int iValue = 0;
int iCount = 0;

printf("Enter number:");
scanf("%d",&iValue);

printf("Enter frequency:");
scanf("%d",&iCount);

Display(iValue,iCount);

    return 0;
}
//Enter number
//1
//Enter frequency
//2
//11