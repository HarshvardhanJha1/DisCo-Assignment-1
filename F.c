#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int marr[n];
	int mind=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		int div=0;
		for (int j = 0; j < n; j++)
		{
			if(arr[j]%arr[i]==0)
			{
				div++;
			}
		}
		if(div==1)
		{
			marr[mind]=arr[i];
			mind++;
		}
	}
	printf("%d\n",mind );
	for(int i=0;i<mind;i++)
		printf("%d ",marr[i]);

}