//Operators
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    c=a&b;
    d=a|b;
    e=a^b;
    printf("a&b: %d \n", c);
    printf("a|b: %d \n", d);
    printf("a^b: %d \n", e);
    return 0;

}