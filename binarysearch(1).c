#include<stdio.h>
void main()
{
int left,right,n,x,mid,flag=0,c;
c++;
printf("enter the size of the array");
c++;
scanf("%d",&n);
c++;
int a[n];
printf("enter the elements");
c++;
for(int i=0;i<n;i++)
{
	c++;
	scanf("%d",&a[i]);
	c++;
}
printf("enter the number to be search");
c++;
scanf("%d",&x);
c++;
left=0;
c++;
right=n-1;
c++;
while(left<=right)
{       
	c++;
	mid=left+(right-left)/2;
	c++;
	if(x==a[mid])
	{
		c++;
		flag=1;
		break;
	}
	else if(x>a[mid])
	{

		left=mid+1;
		c++;
	}
	else if(x<a[mid])
	{
		left=mid-1;
		c++;
	}
}
if(flag==0)
	{	c++;
		printf("element not found");
		c++;
	}
	else if(flag==1)
	{ c++;
	printf("element found\n");
	c++;
	}
	printf("space complexity=%d\n",(4*n)+32);
	c++;
	c++;
	printf("time complexity=%d\n",c);
}	

	
	
	
