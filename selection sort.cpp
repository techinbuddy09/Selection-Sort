#include<stdio.h>
int main()
{ int t,n,a[100];
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("eneter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				//awapping
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			
		}
		
		
	}
	printf("the  selection sorted array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
