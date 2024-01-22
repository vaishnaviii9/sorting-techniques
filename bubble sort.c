#include<stdio.h>
void main()
{
	int a[5],temp,i,pass;
		printf("\n Enter elements");
		for(i=0;i<=4;i++)
		{
			scanf("%d",&a[i]);
		}
				 
				for(pass=0;pass<=3;pass++)
				{
					for(i=0;i<=4-pass;i++)
					{
						if(a[i] >a[i+1])
						{
							temp=a[i];
							a[i]=a[i+1];
							a[i+1]=temp;
						}
					}
				}
				
		printf("\n Sorted elements are");
		for(i=0;i<=4;i++)
		{
			printf("\n %d",a[i]);
		}
}
