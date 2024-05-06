#include<stdio.h>

#define TRUE 1
#define FALSE 2
typedef int BOOL;
int Check( int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
 int iVlaue=0;
 BOOL bRet =FALSE;

 printf("Enter number");
 scanf("%d",&iVlaue);
 bRet=ChKEven(iVlaue);
 {
    if (bRet==TRUE)
    {
        printf("Divisibe by 5" );
    }
    else{
        printf("Not divisible by 5");
    }
 }
 
    return 0;
}

