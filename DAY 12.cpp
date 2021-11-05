#include <stdio.h>
int main()
{
    float H,CC,TS;
    printf("What is the hardness of the metal?\n");
    scanf("%f",&H);
    printf("What is the carbon content of the metal?\n");
    scanf("%f",&CC);
    printf("What is the tensile strength of the metal?\n");
    scanf("%f",&TS);
    if(H>50 & CC<0.7 & TS>5600)
    {
        printf("GRADE 10\n");
    }
    else if(H>50 & CC<0.7 & TS<5600)
    {
        printf("GRADE 9\n");
    }
    else if(H<50 & CC<0.7 & TS>5600)
    {
        printf("GRADE 8\n");
    }
    else if(H>50 & CC>0.7 & TS>5600)
    {
        printf("GRADE 7\n");
    }
    else if(H>50 || CC>0.7 || TS<5600)
    {
        printf("GRADE 6\n");
    }
    else if(H<50 & CC>0.7 & TS<5600)
    {
        printf("GRADE 5\n");
    }
    return 0;
}
