//progran which accept one number from user andprint that number of even number on screen
#include<stdio.h>

void PrintEven(int iNo)
{
for (int i =1;i<=iNo;i++) 
{

    if(i%2==0)
    {
        printf("%d",i);
    }
}


}
int main()
{
    int iValue= 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}
//2 4 6 8 12 14