#include <stdio.h>
int main()
{
    int a,b;
    int sum, diff,p,rem;
    float d;
    
     printf("Enter First no.:");
     scanf("%d",&a);
     printf("Enter Second no");
     scanf("%d",&b);

     sum=a+b;
     diff=a-b;
     p=a*b;
     d=a/b;
     rem=a%b;
     printf("Sum is %d \nDifference is %d \nProduct is %d \nQuotient is %f \nRemainder is %d",sum,diff,p,d,rem);
     return 0;
     
}