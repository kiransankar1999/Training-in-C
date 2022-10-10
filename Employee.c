#include<stdio.h>
#include<stdlib.h>
void max(int A[100],int n);
void min(int A[100],int n);
void main()
{
    int i=0,n,age[100];
    printf(" Enter number of employees: \n");
    scanf("%d",&n);
    printf(" Enter age of employees: \n");
    while(i<n)
    {
        scanf("%d",&age[i]);
        i++;
    }
    max(age,n);
    min(age,n);
}
void max(int A[100],int n)
{
    int max=A[0],i=0;
    while(i<n)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        i++;
    }
    printf("Maximum age of employee is %d \n", max);
}
void min(int A[100],int n)
{
    int min=A[0],i=0;
    while(i<n)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
        i++;
    }
    printf("Minimum age of employee is %d \n", min);
}
