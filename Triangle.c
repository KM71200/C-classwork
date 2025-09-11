//Check if triangle valid or not
#include <stdio.h>
int main()
{
    int x,y,z;

    printf("Enter First side:");
    scanf("%d",&x);

    printf("Enter Second side:");
    scanf("%d",&y);

    printf("Enter Third side:",&z);
    scanf("%d",&z);


    if (x+y > z){
        printf("Triangle is valid \n");

        if (x==y && y==z && z==x){
            printf("It is an Equilateral Triangle \n");
        }

        if (x==y || y==z || z==x){
            printf("It is an Isosceles triangle \n");
        }

        if (x!=y && y!=z && z!=x){
            printf("It is a Sclane Triangle \n");
        }

        if ((x*x) == (y*y) + (z*z) || (y*y) == (x*x) + (z*z) || (z*z) == (y*y) + (x*x)){
            printf("It is Right Triangle \n");
        }    
        
    }
    else {
        printf("Not a valid Triangle \n");
    }
    return 0;
}