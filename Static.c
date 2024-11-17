#include<stdio.h>

void Display()
{
    int i = 10;
    static int j = 10;

    i++;
    j++;
    printf("value of i: %d\n",i);
    printf("value of j : %d\n",j);
}

int main()
{
    Display();
    Display();
    Display();
    Display();

    return 0;
}