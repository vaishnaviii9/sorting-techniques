#include<stdio.h>
void main()
{
    int a[4],temp,i;
    printf("\n Enter 4 elements");
        for(i=0; i<=3;i++)
        {
         scanf("%d",&a[i]);
        }
        
        int gap=4/2;
        while(gap>0)
        {
            for(i=0; i<=3-gap; i++)
            {
                if(a[gap+i]<a[i])
                {
                    temp=a[gap+i];
                    a[gap+i]=a[i];
                    a[i]=temp;
                }
            }
            gap--;
        }
        
    printf("\n Sorted elements :");
        for(i=0; i<=3; i++)
        {
            printf("%d \n",a[i]);
        }
    
}
