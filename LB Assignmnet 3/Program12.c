#include<stdio.h>

void DisplayEvenFactor (int iNo)
{

    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if(1%2==0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
 int iVlaue=0;
 printf("Enter number\n");
 scanf("%d",&iVlaue);
 DisplayEvenFactor(iVlaue);
    return 0;
}
//2 4 6 12 18