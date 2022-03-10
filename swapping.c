#include<stdio.h>
//swaping without a usage of temporary variable
int main()
{
    int a,b;
    printf("enter the values of a,b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values of a and b :%d %d",a,b);
    return 0;
}