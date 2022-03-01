#include<stdio.h>
int main()
{
	int a[30],i,m,temp,loc1,loc2;
	printf("Enter the size of A array :");
	scanf("%d",&m);
	
	printf("Enter the elements of Array :\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter locations to swap : \n");
	scanf("%d%d",&loc1,&loc2);
	temp=a[loc1];
	a[loc1]=a[loc2];
	a[loc2]=temp;
	
	printf("After swapping : \n");
	for(i=0;i<m;i++)
		printf("%d\n",a[i]);
	return 0;
}