#include <stdio.h>
int main()
{
	int i,n,arr[100],small,pos;
	printf("Enter the value for n : ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("Enter value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	small = arr[0];
	for (i=0; i<n; i++)
	{
		if (small>arr[i])
		{
			small=arr[i];
			pos=i;
		}
	}
	printf("The smallest value is %d\n",small);
	printf("The position of smallest value is %u",pos);
	return 0;
}
