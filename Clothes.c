#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("The clothes are 36 inches and 24 inches wide.\n");
    int a=36,b=24,i,eq;
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            {
                eq=i;
            }
    }
    printf("\nThe strips should be cut %d inches wide from each cloth.",eq);
}
