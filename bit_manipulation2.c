#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n value  ");
    scanf("%d",&n);
    if((n&1)==0)     //performing logical and on the number with 1
       printf("%d is a even number",n);
    else
       printf("%d is a odd number",n);

    return 0;
}