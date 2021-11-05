#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("x=%d and y=%d",x,y);
    getch();
    return 0;
}
