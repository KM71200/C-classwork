#include <stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    printf("%d \n",a+=10);
    printf("%d \n",a-=10);
    printf("%d \n",a*=10);
    printf("%d \n",a/=10);
    printf("%d \n",a%=10);
    return 0;



}