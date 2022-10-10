#include <stdio.h>
#include <stdlib.h>
int i,j,m1,n1,m2,n2,A[10][10],B[10][10];
void read(int m1, int n1, int A[10][10]);
void print(int m1, int n1, int A[10][10]);
void add(int m1, int n1, int A[10][10], int B[10][10]);
void multi(int m1, int n1, int n2, int A[10][10], int B[10][10]);
void identity(int m1, int n1, int A[10][10]);
void main()
{
    int ch=0;
    printf("Enter the size of first matrix: \n");
    scanf("%d %d",&m1,&n1);
    read(m1,n1,A);
    printf("Elements of the first matrix are: \n");
    print(m1,n1,A);
    printf("Enter the size of second matrix: \n");
    scanf("%d %d",&m2,&n2);
    read(m2,n2,B);
    printf("Elements of the second matrix are: \n");
    print(m2,n2,B);
    while(1)
    {
        printf("\n Enter your choice \n 1. Addition of two arrays \n 2. Multiplication of two arrays \n 3. Check whether the given matrix is identity matrix or not \n 4. Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
        
            case 1: if(m1==m2 && n1==n2)
                        add(m1,n1,A,B);
                    else
                        printf("Addition not possible \n");
                    break;
            case 2: if(n1==m2)
                        multi(m1,n1,n2,A,B);
                    else
                        printf("Multiplication not possible \n");
                    break;
            case 3: printf("\n First matrix");
                    identity(m1,n1,A);
                    printf("\n Second matrix");
                    identity(m2,n2,B);
                    break;
            case 4: exit(0);
            default:printf("Invalid choice \n");
        }
    }
}

void read(int m1, int n1, int A[10][10])
{
    printf("Enter elements into the matrix \n");
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&A[i][j]);
}

void print(int m1,int n1,int A[10][10])
{
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            printf("%d \t",A[i][j]);
        printf("\n");
    }
}

void add(int m1, int n1, int A[10][10], int B[10][10] )
{
    int sum[10][10];
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            sum[i][j]=A[i][j]+B[i][j];
    printf("\n Sum of Arrays are: \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
            printf("%d \t",sum[i][j]);
        printf("\n");
    }
}

void multi(int m1, int n1, int n2, int A[10][10], int B[10][10] )
{
    int mul[10][10],k=0;
    for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {  
                mul[i][j]=0;
                for(k=0;k<n1;k++)
                {
                    mul[i][j]+= A[i][k]*B[k][j];
                }    
            }
        }
    printf("\n Product of Arrays are: \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
            printf("%d \t",mul[i][j]);
        printf("\n");
    }
}

void identity(int m1, int n1, int A[10][10])
{
    int flag=0;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(i==j && A[i][j]!=1)
            {
                flag=1;
                break;
            }
            else if(i!=j && A[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf(" is an Identity matrix \n");
    else
        printf(" is not an Identity matrix \n");
}
