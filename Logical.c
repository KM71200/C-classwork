#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("%d \n",a>b && b>a);
    printf("%d \n",a>b || b>a);
    printf("%d",(a||b)&&!(a&&b));
    return 0;
}