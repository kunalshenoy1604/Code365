#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("Enter the number of wheels available :-\n");
    scanf("%d",&x);
    printf("Enter the number of car bodies available :-\n");
    scanf("%d",&y);
    printf("Enter the number of figures available :-\n");
    scanf("%d",&z);
    if(x>=4)
    if(y>=1)
    if(z>=2)
    {
        printf("Toy car can be sucessfully made");
    }
    if(x<4)
    if(y<1)
    if(z<2)
    {
        printf("The Toy Car Can't be made");
    }
    getch();
}
