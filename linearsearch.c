#include<stdio.h>
void main()
{
	int n,i,x,count=0,time=0;
	time++;
	time++;
	printf("enter the limit");
	time++;
	scanf("%d",&n);
	time++;
	int a[n];
	printf("enter the elements");
	time++;
	for(i=0;i<n;i++)
	{
	time++;
	scanf("%d",&a[i]);
	time++;
	}
	time++;
	printf("enter the number to be searched");
	time++;
	scanf("%d",&x);
	time++;
	for(i=0;i<n;i++)
	{
		time++;
		if(a[i]==x)
		{
			time++;
			count++;
		 	printf("the element is found at %d\n",i+1);
		 	time++;
		}
	}
	time++;
	if(count>0)
	{
		time++;
		printf("the element is found %d times\n",count);
		time++;
	}
	else
	{
	printf("the element not found");
	time++;
	
	}
	printf("space complexity=%d\n",(4*n)+20);
	time++;
	time++;
	printf("Time complexity=%d\n",time);
}		

		
