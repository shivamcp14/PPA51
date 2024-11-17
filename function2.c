#include<stdio.h>

int Addition (int value1,int value2)
{
    int result = 0;
   result = value1 + value2;

   return result;
}
int main()
{
    int no1=0,no2=0,Ans=0;

    printf("enter first number :\n");
    scanf("%d",&no1);

    printf("enter second number : \n");
    scanf("%d",&no2);

    Ans = Addition (no1,no2);

    printf("Addition is :%d\n",Ans);


    return 0;
}