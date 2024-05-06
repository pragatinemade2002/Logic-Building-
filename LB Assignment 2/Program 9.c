//Accept tow number from user and display first number in second numbwe of time.

#include<stdio.h>

void Display (int iNo, int iFrequency)
{
    for (int i=0;i<iFrequency;i++)
    {

        printf("%d",iNo);
    }
    printf("\n");
}
int main()
{

    int iValue=0;
    int iCount = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
     
     printf("Enter the Frequency:\n");
    scanf("%d",&iCount);
     Display(iValue,iCount);

    return 0;
}