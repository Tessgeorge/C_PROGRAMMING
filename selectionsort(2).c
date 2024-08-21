#include<stdio.h>
void main()
{
	int i=0,n,j,small,a[10],temp,c;
	c++;
	printf("enter the limit");
	c++;
	scanf("%d",&n);
	c++;
	printf("enter the array elrments:\n");
	c++;
	for(i=0;i<n;i++)
	{
		c++;
		scanf("%d",&a[i]);
		c++;
	}
	for(i=0;i<n-1;i++)
	{	c++;
	small=i;
	for(j=i+1;j<n;j++)
	{
	c++;
	{	c++;
	if(a[small]>a[j])
	{	c++;
	small=j;
	}
	}
	if(i!=small)
	{
		temp=a[i];c++;
		a[i]=a[small];c++;
		a[small]=temp;c++;
	}
	}
	}
	printf("the sorted array is:\n");c++;
	for(i=0;i<n;i++)
	{	c++;
	printf("%d\t",a[i]);c++;
}
printf("the space complexity=%d\n",(4*n+32));
c++;
printf("the time complexity=%d",c);
}

	
	
