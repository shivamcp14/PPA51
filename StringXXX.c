#include<stdio.h>
#include<string.h>
int main()
{
     char Arr[] = "Python";
     char *Str = Arr;

     while(*Str !='\0')
     {
        printf("%c\n",*Str);
        Str++;
     }
     

    return 0;
}