#include <stdio.h>
int main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    for(i=0;i<=9;i++)//front order
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--)//reverse order
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
