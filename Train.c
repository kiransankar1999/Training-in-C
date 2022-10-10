#include<stdio.h>
#include<stdlib.h>
int main()
{
    int check=0,rev=0,num=0,count=0,c=0;
    printf("Train number is ");
    scanf("%d", &num);
    check=num;
    while(check>0)// To be able to print numbers ending with zeros as well by finding the total number of digits
    {
        check=check/10;
        count++;
    }
    check=num;
    c=count;
    while(c>0)
    {
        rev=rev*10 + (check%10);
        check=check/10;
        c--;
    }
    while(count>0)
    {
        check=rev%10;
        switch(check)
        {
            case 0: printf("Zero \t");
                    break;
            case 1: printf("One \t");
                    break;
            case 2: printf("Two \t");
                    break;
            case 3: printf("Three\t");
                    break;
            case 4: printf("Four \t");
                    break;
            case 5: printf("Five \t");
                    break;
            case 6: printf("Six \t");
                    break;
            case 7: printf("Seven \t");
                    break;
            case 8: printf("Eight \t");
                    break;
            case 9: printf("Nine \t");
                    break;
            default: break;
        }
        rev=rev/10;
        count--;
    }
    return 0;
}
