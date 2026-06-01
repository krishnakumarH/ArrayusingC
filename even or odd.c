/******************************************************************************
7
22,45,67,32,10,10,22

op1-- 22,32,10,10,2 even
op2-- 45,67 odd
*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,even=0,odd=0,j=0,k=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
		    even++;
		}
		//printf("%d is 1",even);
		else
		{
			odd++;
		}
		//printf("%d is 2",odd);
	}
    printf("%d %d\n",even,odd);
    int evenarr[even],oddarr[odd];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[j]=arr[i];
            j++;
        }
        else
        {
            evenarr[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    printf("%d ",evenarr[i]);
    printf("\n");
    for(i=0;i<k;i++)
    printf("%d ",oddarr[i]);
	return 0;
}
