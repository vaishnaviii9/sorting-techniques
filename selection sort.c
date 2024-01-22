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
					for(i=pass+1;i<=4;i++)
					{
						if(a[pass] > a[i])
						{
							temp=a[pass];
							a[pass]=a[i];
							a[i]=temp;
						}
					}
				}
				
		printf("\n Sorted elements are");
		for(i=0;i<=4;i++)
		{
			printf("\n %d",a[i]);
		}
}
