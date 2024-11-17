#include<stdio.h>
int Addition (int No1,int No2)
{
    int Ans=0;
    Ans = No1+No2;
    return Ans;

}
   int substraction (int No1,int No2)
{
    int Ans=0;
    Ans = No1- No2;
    return Ans;

}



int main()
{
    int value1 = 0, value2 = 0, Ret= 0;

    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&value2);

    Ret = Addition(value1,value2);
    printf("Addition is : %d\n",Ret);

    Ret = substraction(value1,value2);
    printf("substraction is : %d\n",Ret);

 return 0;




}