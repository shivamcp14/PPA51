#include<stdio.h>
int main()
{
    double no = 3.14;  // consider address of no as 100
    double *a = &no;   // cosider address of no as 200
    double **b = &a;   // consider address of no as 300
    double ***c = &b;  // consider address of no as 400
    double ****d = &c; // consider address of no as 500

    printf("%d\n",&no);
    printf("%d\n",a);
    printf("%d\n",&c);
    printf("%d\n",&d);
    printf("%d\n",d);
    printf("%d\n",**d); 
    printf("%d\n",**c);
    printf("%d\n",*b);

    return 0;

}