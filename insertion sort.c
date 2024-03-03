#include<stdio.h>
void main()
{
    int i,j,sele_ele, a[4];
    printf("\n Enter 4 elements");
        for(i=0; i<=4;i++)
        {
         scanf("%d",&a[i]);
        }
        
        for(i=0;i<=4;i++)
        {
            sele_ele=a[i];
            for(j=i-1; j>=0 && sele_ele<a[j]; j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=sele_ele;
            
        }
        
    printf("\n Sorted elements :");
        for(i=0; i<=4; i++)
        {
            printf("%d \n",a[i]);
        }
    
}
