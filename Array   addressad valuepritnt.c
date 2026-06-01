/******************************************************************************
******************************************************************************
#include <stdio.h>

int main()
{
    int a[10]={1,2,3,'a',4,6};
    for(int i=0;i<=5;i++)
    printf("%d ",a[i]);
    return 0;
}*/
#include<stdio.h>
int main()
{
    
    int n,i;
    scanf("%d",&n);
    double ar[n];
    for(i=0;i<n;i++)
    scanf("%lf",&ar[i]);
    for(i=0;i<n;i++)
    printf("address=%x-->value=%lf\n",&ar[i],ar[i]);                    //%x=hexadecimal 
    printf("%d",ar[1]*25);
    
}
