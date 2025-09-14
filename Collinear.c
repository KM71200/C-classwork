//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float Area;

    printf("Enter x1 y1:");
    scanf("%d %d",&x1,&y1);

    printf("Enter x2 y2:");
    scanf("%d %d",&x2,&y2);

    printf("Enter x3 y3:");
    scanf("%d %d",&x3,&y3);

    Area= 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

    if (Area == 0){
        printf("Points are Collinear");
    }

    else {
        printf("Points are non collinear");
    }
    return 0;
}

