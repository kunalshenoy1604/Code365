#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the first number\n");
    scanf("%d",&n1);
    printf("Enter the second number\n");
    scanf("%d",&n2);
    if(n1^n2)
    {
        printf("NOT EQUAL");
    }
    else
    {
        printf("EQUAL");
    }
    return 0;
}
