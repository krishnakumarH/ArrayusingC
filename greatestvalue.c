#include<stdio.h>                           //   ip  //5,10,1,20,300,3
int main( )                                  //  op  //max_value=10 \\max=10 \\max=20 \\max=300 \\max=300
{
    int n,i,max_value;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    max_value=ar[0];
    for(i=0;i<n;i++)
    {
        if(max_value>ar[i])
        max_value=max_value;
        else
        max_value=ar[i];
    }
    printf("%d",max_value);
    return 0;
}
